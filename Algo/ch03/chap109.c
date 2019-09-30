#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


#ifdef _PJS

int bin_search(const int a[], int n, int key) {
	int pl = 0;
	int pr = n - 1;
	int pc;
	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
	} while (pl <= pr);
	return -1;
}

int main()
{
	int nx, ky, idx;
	int i = 1;
	int *x;
	puts("���� �˻�");
	printf("��� ���� : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	printf("������������ �Է��ϼ���.\n");
	printf("x[0] : ");
	scanf("%d", &x[i]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("�˻��� : ");
	scanf("%d", &ky);
	idx = bin_search(x, nx, ky);
	if (idx == -1) {
		puts("�˻��� �����߽��ϴ�.");
	}
	else {
		printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	}
	free(x);

	return 0;
}

#endif