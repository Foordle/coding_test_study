#include<stdio.h>

void sayHello()
{
	printf("Hello\n");
	sayHello();
}


int main()
{
	sayHello();

	return 0;
}