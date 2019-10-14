#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define swap(type,x,y) do { type t = x; x = y; y = t; }while(0)


void bubble(int a[], int n)
{
	int i, j, m;
	int c = 0;
	int s = 0;

	for (i = 0; i < n - 1; i++) {
		printf("�н�%d��\n", i + 1);
		for (j = n - 1; j > i; j--) {
			for (m = 0; m < n - 1; m++)
				printf("%3d %c", a[m], (m != j - 1) ? ' ' :
				(a[j - 1] > a[j]) ? '+' : '-');
			printf("%3d\n", a[n - 1]);

			c++;
			if (a[j - 1] > a[j]) {
				s++;
				swap(int, a[j - 1], a[j]);
			}
		}
		for (m = 0; m < n; m++)
			printf("%3d  ", a[m]);
		putchar('\n');
	}
	printf("�񱳸� %dȸ �߽��ϴ�.\n", c);
	printf("��ȯ�� %dȸ �߽��ϴ�.\n", s);
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