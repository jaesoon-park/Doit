#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
	Intqueue que;

	if (Initialize(&que, 64) == -1) {
		puts("큐의 생성에 실패했습니다.");
		return 1;
	}

	while (1) {
		int m, x;
		int idx;

		printf("현재 데이터의 수 : %d / %d\n", Size(&que), Capacity(&que));
		printf("(1)맨 앞에 데이터 인큐 (2)맨 앞의 데이터 디큐 (3)맨 앞 피크 (4)출력\n"
			"(5)맨 뒤에 데이터 인큐 (6)맨 뒤의 데이터 디큐 (7)맨 뒤 피크\n"
			" (0)종료 : ");
		scanf("%d", &m);

		if (m == 0) break;

		switch (m) {
		case 1: 
			printf("데이터：");   scanf("%d", &x);
			if (EnqueFront(&que, x) == -1)
				puts("\a오류 : 인큐에 실패했습니다.");
			break;

		case 2: 
			if (queFront(&que, &x) == -1)
				puts("\a오류 : 디큐에 실패했습니다.");
			else
				printf("디큐한 데이터는 %d입니다.\n", x);
			break;

		case 3: 
			if (PeekFront(&que, &x) == -1)
				puts("\a오류 : 피크에 실패했습니다.");
			else
				printf("피크한 데이터는 %d입니다.\n", x);
			break;

		case 4: 
			Print(&que);
			break;

		case 5: 
			printf("데이터：");   scanf("%d", &x);
			if (EnqueRear(&que, x) == -1)
				puts("\a오류 : 인큐에 실패했습니다.");
			break;

		case 6: 
			if (queRear(&que, &x) == -1)
				puts("\a오류 : 디큐에 실패했습니다.");
			else
				printf("디큐한 데이터는 %d입니다.\n", x);
			break;

		case 7: 
			if (PeekRear(&que, &x) == -1)
				puts("\a오류 : 피크에 실패했습니다.");
			else
				printf("피크한 데이터는 %d입니다.\n", x);
			break;


		}
	}

	Terminate(&que);

	return 0;
}