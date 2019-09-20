#include <stdio.h>

#ifdef _PJS
int main()
{

	printf("         =========구구단=========\n");
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf(" %3d ", i * j);
		}
		printf("\n");
	}
}
#endif