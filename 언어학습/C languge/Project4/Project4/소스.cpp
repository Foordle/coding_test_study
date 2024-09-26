#include <stdio.h>

int ss(int num)
{
	int result = 10;
	return result + num;
}

int main()
{
	int num = 5;
	int result = ss(num);
	printf("%d", result);
}