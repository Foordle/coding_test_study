#include <stdio.h>

int main(void)
{
	int i, j;
	int arr[2][3][4] = {
		{
		 {1,2,3,4},
		 {5,6,7,8},
		 {9,10,11,12},
		},
		{
			{21,22,23,24},
			{25,26,27,28},
			{29,30,31,31},
		}
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[1][i][j]);

		}
		printf("\n");

	}

	return 0;

}