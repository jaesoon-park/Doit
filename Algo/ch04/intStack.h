#pragma once
#ifndef _PJS1
#define _PJS1

enum { StackA, StackB };

typedef struct {
	int max;
	int ptr;
	int ptrB;
	int *stk;
} IntStack;

int Initialize(IntStack *s, int max);

int Push(IntStack *s, int k, int x);

int Pop(IntStack *s, int k, int *x);

int Peek(const IntStack *s, int k, int *x);

void Clear(IntStack *s, int k);

int Capacity(const IntStack *s);

int Size(const IntStack *s, int k);

int IsEmpty(const IntStack *s, int k);

int IsFull(const IntStack *s);

int Search(const IntStack *s, int k, int x);

void Print(const IntStack *s, int k);

void Terminate(IntStack *s);

#endif