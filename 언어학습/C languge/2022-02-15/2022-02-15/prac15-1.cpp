#include<stdio.h>
void add(int a, int b)
{
	printf("�� : %d\n", a + b);
	printf("�� : %d\n", a - b);
	printf("�� : %d\n", a * b);
	printf("�� : %d\n", a / b);
}

int main()
{
	add(13, 14);
}