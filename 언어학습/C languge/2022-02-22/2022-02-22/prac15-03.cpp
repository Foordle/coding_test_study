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
	
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	printf("%d�� %d������ 7�� ����� %d�� �Դϴ�.", num, num + 200, fs(num));
	return 0;
}