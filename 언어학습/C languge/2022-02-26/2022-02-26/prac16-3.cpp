#include<stdio.h>
void recursiveSum(int n)
{
	if (n != 0)
	{
		recursiveSum(n - 1);
		int sum = 0;

	}
}
int main(void)
{
	int n;
	printf("n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	int result = recursiveSum(n);
	printf("1���� n������ �� : %d\n", result);
	return 0;
}