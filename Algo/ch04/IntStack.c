#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "intStack.h"



int Initialize(IntStack *s, int max) {
	s->ptr = 0;
	s->ptrB = max;
	if ((s->stk = calloc(max, sizeof(int))) == NULL) {
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}

int Push(IntStack *s, int x) {
	if (s->ptr >= s->ptrB) {
		return -1;
	}
	s->stk[s->ptr++] = x;
	return 0;
}
int PushB(IntStack *s, int y) {
	if (s->ptrB <= s->ptr) {
		return -1;
	}
	s->stk[s->ptrB--] = y;
	return 0;
}

int Pop(IntStack *s, int *x) {
	if (s->ptr <= 0) {
		return -1;
	}
	*x = s->stk[--s->ptr];
	return 0;
}
int PopB(IntStack *s, int *y) {
	if (s->ptrB >= max) {
		return -1;
	}
	*y = s->stk[++s->ptrB];
	return 0;
}

int Peek(const IntStack *s, int *x) {
	if (s->ptr <= 0) {
		return -1;
	}
	*x = s->stk[s->ptr - 1];
	return 0;
}

void Clear(IntStack *s) {
	s->ptr = 0;
}

int Capacity(const IntStack *s) {
	return s->max;
}

int Size(const IntStack *s) {
	return s->ptr;
}

int IsEmpty(const IntStack *s) {
	return s->ptr <= 0;
}

int IsFull(const IntStack *s) {
	return s->ptr == s->ptrB;
}

int Search(const IntStack *s, int x) {

	for (int i = s->ptr - 1; i >= 0; i--)
		if (s->stk[i] == x)
			return i;
	return -1;
}

void Print(const IntStack *s) {
	int i;
	for (i = 0; i < s->ptr; i++)
		printf("%d", s->stk[i]);
	putchar('\n');
}

void Terminate(IntStack *s) {
	if (s->stk != NULL)
		free(s->stk);
	s->max = s->ptr = 0;
}


