#include<stdio.h>

void increaseNumber()
{
	static int number = 0;
	number++;
	printf("number:%d\n", number);

}

int main(void)
{
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;

}