#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do { type t = x; x = y; y = t; }while(0)


#ifdef _PJS
void quick(int a[],int left, int right)
{
	
	int pl = left;
	int pr = right;
	int x = a[(pl + pr) /2];

	do {
		while (a[pl] < x)pl++;
		while (a[pr] > x)pr--;
		if (pl <= pr) {
			swap(int, a[pl], a[pr]);
			pl++;
			pr--;
		}
	} while (pl <= pr);
	
	if (left < pr) quick(a, left, pr);
	if (pl < right) quick(a, pl, right);

}

int main()
{
	int i, nx;
	int *x;
	puts("������");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}


	quick(x, 0, nx - 1);
	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);
	free(x);
}

#endif