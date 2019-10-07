#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define _PJS
int fact(int);
#ifdef _PJS

void main()
{
	int n;
	printf("\n 정수를 입력하세요 :");
	scanf("%d", &n);
	printf("%d의 순차곱셈 값은 %d입니다.\n", n, fact(n));

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
	printf("\n 정수를 입력하세요 :");
	scanf("%d", &n);
	int sum = 1;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	printf("%d의 순차곱셈 값은 %d입니다.\n", n, sum);

}*/

#endif