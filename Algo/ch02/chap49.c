#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


#ifdef _PJS

int main() {
	int * x;
	x = (int *)calloc(1, sizeof(int));
	if (x == NULL) {
		printf("\n�޸� �Ҵ翡 �����߽��ϴ�.");
	}
	else {
		*x = 57;
		printf("*x = %d\n", *x);
		free(x);
	}
	return 0;
}
#endif
