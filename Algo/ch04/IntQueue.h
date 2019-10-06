#pragma once
#define _PJS
#ifdef _PJS

typedef struct {
	int max;      /* ť�� �ִ� �뷮 */
	int num;      /* ���� ��ڼ� */
	int front;      /* �� �� ��Ҹ� ����Ű�� Ŀ�� */
	int rear;      /* �� �� ��Ҹ� ����Ű�� Ŀ�� */
	int *que;      /* ť�� ����Ű�� ������ */
} Intqueue;

int Initialize(Intqueue *q, int max);
int EnqueFront(Intqueue *q, int x);
int EnqueRear(Intqueue *q, int x);
int queFront(Intqueue *q, int *x);
int queRear(Intqueue *q, int *x);
int PeekFront(const Intqueue *q, int *x);
int PeekRear(const Intqueue *q, int *x);
void Clear(Intqueue *q);
int Capacity(const Intqueue *q);
int Size(const Intqueue *q);
int IsEmpty(const Intqueue *q);
int IsFull(const Intqueue *q);
int Search(const Intqueue *q, int x);
int Search2(const Intqueue *q, int x);
void Print(const Intqueue *q);
void Terminate(Intqueue *q);


#endif