#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define _PJS
int fact(int);
#ifdef _PJS

void main()
{
	int n;
	printf("\n ������ �Է��ϼ��� :");
	scanf("%d", &n);
	printf("%d�� �������� ���� %d�Դϴ�.\n", n, fact(n));

}

int fact(int n) {
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	return sum;
}

/*void main()
{
	int n;
	printf("\n ������ �Է��ϼ��� :");
	scanf("%d", &n);
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	printf("%d�� �������� ���� %d�Դϴ�.\n", n, sum);

}*/

#endif