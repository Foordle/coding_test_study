#include<stdio.h>

int getDiffByValue(int a, int b)
{
	printf("%d\n", a - b);

	return a - b;
}

int callDiffByRef(int *a, int *b)
{
	if (getDiffByValue(*a, *b) < 0)
	{
		int temp = *a;
		*a = *b;
		*b = temp;

		
	}
	return 0;
}

int main(void)
{
	int num1,num2;
	printf("비교할 두 수를 입력(듀수는 비교 뒤 num1>num2의 형태로 출력)>>>");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	getDiffByValue(num1, num2);
	callDiffByRef(&num1, &num2);
	printf("num1은 %d > num2는 %d", num1, num2);
}