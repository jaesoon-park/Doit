#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "intStack.h"

int main(void)
{
	IntStack s;

	if (Initialize(&s, 12) == -1) {
		puts("������ ������ �����߽��ϴ�.");
		return 1;
	}

	while (1) {
		int menu, x;
		

		printf("���� ������ ���� : A:%d B:%d / %d\n", Size(&s, StackA), Size(&s, StackB), Capacity(&s));
		printf("1) A�� Ǫ�� 2) A���� �� 3) A���� ��ũ 4) A�� ���\n"
			"5) B�� Ǫ�� 6) B���� �� 7) B���� ��ũ 8) B�� ���\n"
			"0) ���� : ");
		scanf("%d", &menu);

		if (menu == 0) 
			break;

		switch (menu) {
		case 1: 
			printf("�����ͣ�");
			scanf("%d", &x);
			if (Push(&s, StackA, x) == -1)
				puts("\a���� : Ǫ�ÿ� �����߽��ϴ�.");
			break;

		case 2: 
			if (Pop(&s, StackA, &x) == -1)
				puts("\a���� : �˿� �����߽��ϴ�.");
			else
				printf("���� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3: 
			if (Peek(&s, StackA, &x) == -1)
				puts("\a���� : ��ũ�� �����߽��ϴ�.");
			else
				printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 4: 
			Print(&s, StackA);
			break;


		case 5: 
			printf("�����ͣ�");
			scanf("%d", &x);
			if (Push(&s, StackB, x) == -1)
				puts("\a���� : Ǫ�ÿ� �����߽��ϴ�.");
			break;

		case 6: 
			if (Pop(&s, StackB, &x) == -1)
				puts("\a���� : �˿� �����߽��ϴ�.");
			else
				printf("���� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 7: 
			if (Peek(&s, StackB, &x) == -1)
				puts("\a���� : ��ũ�� �����߽��ϴ�.");
			else
				printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 8: 
			Print(&s, StackB);
			break;

		}
	}

	Terminate(&s);

	return 0;
}