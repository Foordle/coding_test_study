#include <stdio.h>

char*getst()
{
	char str[100];
	gets_s(str);

	return str;
}
int main()
{
	char*result = getst();
	printf("%s", result);

	return 0;
}