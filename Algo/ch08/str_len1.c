#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#ifdef _PJS
int str_len1(const char *s)
{
	int len = 0;
	while (s[len])
		len++;
	return len;
}
int str_len2(const char *s)
{
	int len = 0;
	while (*s++)
		len++;
	return len;
}
int str_len3(const char *s)
{
	const char *p = s;
	while (*s)
		s++;
	return s - p;
}


int main(void)
{
	char str[256];
	printf("���ڿ� : ");
	scanf("%s", str);
	printf("�� ���ڿ��� ���̴� %d �Դϴ�.\n", str_len1(str));

	return 0;
}

#endif