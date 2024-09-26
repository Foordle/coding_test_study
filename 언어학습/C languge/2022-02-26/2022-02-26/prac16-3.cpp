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
	printf("n을 입력하세요 : ");
	scanf_s("%d", &n);
	int result = recursiveSum(n);
	printf("1부터 n까지의 합 : %d\n", result);
	return 0;
}