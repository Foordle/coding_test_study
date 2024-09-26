#include<stdio.h>

int readArray(int* arr, int length)
{
	int i;
	printf("배열의 요소 읽어보기 : [");
	for (i = 0; i < length; i++)
	{
		printf("%d", arr[i]);
		if (i + 1< length)
		{
			printf(",");
		}
		else
		{
			printf("");
		}
	}
	printf("]\n");
	return 0;
}

int main(void)
{
	int arr[3] = { 3,6,9 };
	readArray(arr, 3);

	return 0;
}