#include<stdio.h>

int add(int a, int b)
{
	return a + b;

}

int main(void)
{

	int result;

	result = add(3, 5);
	printf("함수가 반환한 값 : %d", result);
	return 0;
}