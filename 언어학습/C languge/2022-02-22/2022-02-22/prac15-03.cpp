#include <stdio.h>

int fs(int a)
{
	int count = 0;
	int num = 0;
	while (1)
	{
		if (a % 7 == 0)
		{
			num++;
		}

		a++;
		count++;

		if (count > 200)
		{
			break;
		}

	}
	return num;
}

int main(void)
{
	int num;
	
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);

	printf("%d와 %d사이의 7의 배수는 %d개 입니다.", num, num + 200, fs(num));
	return 0;
}