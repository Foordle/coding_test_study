#include<stdio.h>
int main() {

	int num;
	printf("������ �Է��ϼ���>>>");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		printf("%d�� ¦��", num);
	}
	else{
		printf("%d�� Ȧ��", num);
	}
}