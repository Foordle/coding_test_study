#include<stdio.h>

int main(void)
{
	char good[] = "Good!";
	const char *bad = "Bad!";
	printf("%s %s", good, bad);

	good[0] = 'H';

}