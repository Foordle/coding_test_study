#include<stdio.h>
int main() {
	int k, e, m, so, si;
	
	printf("���� ������ �Է��ϼ���>>");
	scanf_s("%d", &k);
	printf("���� ������ �Է��ϼ���>>");
	scanf_s("%d", &e);
	printf("���� ������ �Է��ϼ���>>");
	scanf_s("%d", &m);
	printf("��ȸ ������ �Է��ϼ���>>");
	scanf_s("%d", &so);
	printf("���� ������ �Է��ϼ���>>");
	scanf_s("%d", &si);

	float aver = (k + e + m + so + si) / 5;
	
	int iaver = int(aver)/10;
	
	switch (iaver) {
	case 9:
		printf("������ A�Դϴ�.");
		break;
	case 8:
		printf("������ B�Դϴ�.");
		break;
	case 7:
		printf("������ C�Դϴ�.");
		break;

	case 6:
		printf("������ D�Դϴ�.");
		break;

	default:
		printf("������ F�Դϴ�.");
		break; 
	}
	return 0;
}