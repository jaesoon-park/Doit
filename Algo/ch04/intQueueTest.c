#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
	Intqueue que;

	if (Initialize(&que, 64) == -1) {
		puts("ť�� ������ �����߽��ϴ�.");
		return 1;
	}

	while (1) {
		int m, x;
		int idx;

		printf("���� �������� �� : %d / %d\n", Size(&que), Capacity(&que));
		printf("(1)�� �տ� ������ ��ť (2)�� ���� ������ ��ť (3)�� �� ��ũ (4)���\n"
			"(5)�� �ڿ� ������ ��ť (6)�� ���� ������ ��ť (7)�� �� ��ũ\n"
			" (0)���� : ");
		scanf("%d", &m);

		if (m == 0) break;

		switch (m) {
		case 1: 
			printf("�����ͣ�");   scanf("%d", &x);
			if (EnqueFront(&que, x) == -1)
				puts("\a���� : ��ť�� �����߽��ϴ�.");
			break;

		case 2: 
			if (queFront(&que, &x) == -1)
				puts("\a���� : ��ť�� �����߽��ϴ�.");
			else
				printf("��ť�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3: 
			if (PeekFront(&que, &x) == -1)
				puts("\a���� : ��ũ�� �����߽��ϴ�.");
			else
				printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 4: 
			Print(&que);
			break;

		case 5: 
			printf("�����ͣ�");   scanf("%d", &x);
			if (EnqueRear(&que, x) == -1)
				puts("\a���� : ��ť�� �����߽��ϴ�.");
			break;

		case 6: 
			if (queRear(&que, &x) == -1)
				puts("\a���� : ��ť�� �����߽��ϴ�.");
			else
				printf("��ť�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 7: 
			if (PeekRear(&que, &x) == -1)
				puts("\a���� : ��ũ�� �����߽��ϴ�.");
			else
				printf("��ũ�� �����ʹ� %d�Դϴ�.\n", x);
			break;


		}
	}

	Terminate(&que);

	return 0;
}