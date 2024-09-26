#include<stdio.h>

int main(void)
{
	char ch[30];
	gets_s(ch);
	puts(ch);
	printf("이 문자열은 다음 줄에서 출력됩니다.\n");

	return 0;
}