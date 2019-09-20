#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#ifdef _PJS
int main()
{
	int n;
	printf("n단의 피라미드 출력합니다.\n");
	printf("입력할 수 : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int z = 1; z <= (2 * i) - 1; z++) {
			printf("*");
		}
		puts("");
	}

}
#endif