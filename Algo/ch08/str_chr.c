#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#ifdef _PJS


int str_chr(const char *s, int c) {
	int i = 0;
	c = (char)c;
	while (s[i] != c) {
		if (s[i] == '\0')
			return -1;
		i++;
	}
	return i;
}

int main() {
	char str[64];
	char tmp[64];
	int ch;
	int idx;

	printf("문자열 : ");
	scanf("%s", str);

	printf("검색할 문자 : ");
	scanf("%s", tmp);
	ch = tmp[0];

	if (idx = str_chr(str, ch) == -1)
		printf("문자 '%c'은(는) 문자열에 없습니다.\n", ch);
	else
		printf("문자 '%c'은(는) %d번째에 있습니다.\n", ch, idx + 1);

}

#endif