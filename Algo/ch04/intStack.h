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
int Initialize(IntStack *s, int max);//�����ʱ�ȭ
int Push(IntStack *s, int x);//���ÿ� �����͸� Ǫ��
int Pop(IntStack *s, int *x);//���ÿ��� �����͸� ��
int Peek(const IntStack *s, int *x);// ���ÿ��� �����͸� ��ũ
void Clear(IntStack *s);//���� ����
int Capacity(const IntStack *s);//������ �ִ�뷮
int Size(const IntStack *s);//������ ������ ����
int IsEmpty(const IntStack *s);//������ ��� �ֳ���?
int IsFull(const IntStack *s);//������ ����á����?
int Search(const IntStack *s, int x);//���¿��� �˻�
void Print(const IntStack *s);//��絥���� ���
void Terminate(IntStack *s);// �������� 
int PushB(IntStack *s, int y);
int PopB(IntStack *s, int *y);
	


#endif