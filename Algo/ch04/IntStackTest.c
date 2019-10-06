#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "intStack.h"

int main(void)
{
	IntStack s;

	if (Initialize(&s, 12) == -1) {
		puts("스택의 생성에 실패했습니다.");
		return 1;
	}

	while (1) {
		int menu, x;
		

		printf("현재 데이터 개수 : A:%d B:%d / %d\n", Size(&s, StackA), Size(&s, StackB), Capacity(&s));
		printf("1) A에 푸시 2) A에서 팝 3) A에서 피크 4) A를 출력\n"
			"5) B에 푸시 6) B에서 팝 7) B에서 피크 8) B를 출력\n"
			"0) 종료 : ");
		scanf("%d", &menu);

		if (menu == 0) 
			break;

		switch (menu) {
		case 1: 
			printf("데이터：");
			scanf("%d", &x);
			if (Push(&s, StackA, x) == -1)
				puts("\a오류 : 푸시에 실패했습니다.");
			break;

		case 2: 
			if (Pop(&s, StackA, &x) == -1)
				puts("\a오류 : 팝에 실패했습니다.");
			else
				printf("팝한 데이터는 %d입니다.\n", x);
			break;

		case 3: 
			if (Peek(&s, StackA, &x) == -1)
				puts("\a오류 : 피크에 실패했습니다.");
			else
				printf("피크한 데이터는 %d입니다.\n", x);
			break;

		case 4: 
			Print(&s, StackA);
			break;


		case 5: 
			printf("데이터：");
			scanf("%d", &x);
			if (Push(&s, StackB, x) == -1)
				puts("\a오류 : 푸시에 실패했습니다.");
			break;

		case 6: 
			if (Pop(&s, StackB, &x) == -1)
				puts("\a오류 : 팝에 실패했습니다.");
			else
				printf("팝한 데이터는 %d입니다.\n", x);
			break;

		case 7: 
			if (Peek(&s, StackB, &x) == -1)
				puts("\a오류 : 피크에 실패했습니다.");
			else
				printf("피크한 데이터는 %d입니다.\n", x);
			break;

		case 8: 
			Print(&s, StackB);
			break;

		}
	}

	Terminate(&s);

	return 0;
}