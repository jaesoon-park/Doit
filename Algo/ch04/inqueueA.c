#include<stdio.h>
#include<stdlib.h>
#include"IntQueue.h"

int Initialize(Intqueue *q, int max)
{
	q->num = q->front = q->rear = 0;
	if ((q->que = calloc(max, sizeof(int))) == NULL) {
		q->max = 0;                     
		return -1;
	}
	q->max = max;
	return 0;
}


int EnqueFront(Intqueue *q, int x)
{
	if (q->num >= q->max)
		return -1;                    
	else {
		q->num++;
		if (--q->front < 0)
			q->front = q->max - 1;
		q->que[q->front] = x;
		return 0;
	}
}


int EnqueRear(Intqueue *q, int x)
{
	if (q->num >= q->max)
		return -1;                    
	else {
		q->num++;
		q->que[q->rear++] = x;
		if (q->rear == q->max)
			q->rear = 0;
		return 0;
	}
}


int queFront(Intqueue *q, int *x)
{
	if (q->num <= 0)                 
		return -1;
	else {
		q->num--;
		*x = q->que[q->front++];
		if (q->front == q->max)
			q->front = 0;
		return 0;
	}
}


int queRear(Intqueue *q, int *x)
{
	if (q->num <= 0)                  
		return -1;
	else {
		q->num--;
		if (--q->rear < 0)
			q->rear = q->max - 1;
		*x = q->que[q->rear];
		return 0;
	}
}


int PeekFront(const Intqueue *q, int *x)
{
	if (q->num <= 0)                   
		return -1;
	*x = q->que[q->front];
	return 0;
}


int PeekRear(const Intqueue *q, int *x)
{
	if (q->num <= 0)                    
		return -1;
	*x = q->que[q->rear];
	return 0;
}


void Clear(Intqueue *q)
{
	q->num = q->front = q->rear = 0;
}


int Capacity(const Intqueue *q)
{
	return q->max;
}

int Size(const Intqueue *q)
{
	return q->num;
}


int IsEmpty(const Intqueue *q)
{
	return q->num <= 0;
}


int IsFull(const Intqueue *q)
{
	return q->num >= q->max;
}


int Search(const Intqueue *q, int x)
{
	int i, idx;

	for (i = 0; i < q->num; i++) {
		if (q->que[idx = (i + q->front) % q->max] == x)
			return idx;     
	}
	return -1;            
}


int Search2(const Intqueue *q, int x)
{
	int i;

	for (i = 0; i < q->num; i++) {
		if (q->que[(i + q->front) % q->max] == x)
			return i;      
	}
	return -1;           
}


void Print(const Intqueue *q)
{
	int i;

	for (i = 0; i < q->num; i++)
		printf("%d ", q->que[(i + q->front) % q->max]);
	putchar('\n');
}


void Terminate(Intqueue *q)
{
	if (q->que != NULL)
		free(q->que);                     
	q->max = q->num = q->front = q->rear = 0;
}