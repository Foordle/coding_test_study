#include<stdio.h>
int main(void) {

	int num = 10;
	int* pnum;
	pnum = &num;

	*pnum = 20;

	printf("num : %d\n", num);
	(*pnum)++;(*pnum)++;
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);

	return 0;

}