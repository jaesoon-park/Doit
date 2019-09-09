#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max4(int a,int b,int c,int d)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;
	return max;
}

int main()
{
	
}