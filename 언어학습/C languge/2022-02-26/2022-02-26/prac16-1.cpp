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
	printf("���� �� ���� �Է�(����� �� �� num1>num2�� ���·� ���)>>>");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	getDiffByValue(num1, num2);
	callDiffByRef(&num1, &num2);
	printf("num1�� %d > num2�� %d", num1, num2);
}