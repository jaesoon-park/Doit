#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do { type t = x; x = y; y = t; }while(0)


#ifdef _PJS
void bubble(int a[], int n)
{
	int k = 0;
	int i;

	while (k < n - 1) {
		int j;
		int last = n - 1;
		for(j = n -1; j >k; j--)
			if (a[j - 1] > a[j]) {
				swap(int, a[j - 1], a[j]);
				last = j;
			}
		k = last;
	}
		
	
}

int main(void)
{
	int i, nx;
	int *x;

	puts("���� ����");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	bubble(x, nx);

	puts("������������ �����߽��ϴ�.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);

	return 0;
}

#endif