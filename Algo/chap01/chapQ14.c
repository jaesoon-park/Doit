#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#ifdef _PJS
int main()
{
	int a;
	printf("�簢���� ����մϴ�.\n");
	printf("�Է��� �� : ");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			printf("*");
		}
		puts("");
	}

}
#endif