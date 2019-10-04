#pragma once
#define _PJS1
#ifdef _PJS1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct {
	int max;
	int ptr;
	int ptrB;
	int *stk;
}IntStack;
int Initialize(IntStack *s, int max);//스택초기화
int Push(IntStack *s, int x);//스택에 데이터를 푸시
int Pop(IntStack *s, int *x);//스택에서 데이터를 팝
int Peek(const IntStack *s, int *x);// 스택에서 데이터를 피크
void Clear(IntStack *s);//스택 비우기
int Capacity(const IntStack *s);//스택의 최대용량
int Size(const IntStack *s);//스택의 데이터 개수
int IsEmpty(const IntStack *s);//스택이 비어 있나요?
int IsFull(const IntStack *s);//스택이 가득찼나요?
int Search(const IntStack *s, int x);//스태에서 검색
void Print(const IntStack *s);//모든데이터 출력
void Terminate(IntStack *s);// 스택종료 
int PushB(IntStack *s, int y);
int PopB(IntStack *s, int *y);
	


#endif