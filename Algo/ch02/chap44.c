#include <stdio.h>

#ifdef _LJH
int main()
{

	printf("          =========°ö¼ÀÇ¥=========\n");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			printf(" %3d ", i * j);
		}
		printf("\n");
	}
}#endif