#include<stdio.h>
int main(void) {

	int num1, num2, num3;
	float fnum1, fnum2;

	printf("������ ���� �Է� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("�Էµ� ������ : %d, %d, %d\n", num1, num2, num3);

	printf("�Ǽ� ���� �Ǽ� �Է� : ");
	scanf_s("%f %d %f", &fnum1, &num1, &fnum2);
	printf("�Էµ� ���� : %f, %d, %f\n", fnum1, num1, fnum2);
	return 0;

}
