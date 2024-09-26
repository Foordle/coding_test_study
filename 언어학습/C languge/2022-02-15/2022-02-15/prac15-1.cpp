#include<stdio.h>
void add(int a, int b)
{
	printf("ÇÕ : %d\n", a + b);
	printf("Â÷ : %d\n", a - b);
	printf("°ö : %d\n", a * b);
	printf("³ª : %d\n", a / b);
}

int main()
{
	add(13, 14);
}