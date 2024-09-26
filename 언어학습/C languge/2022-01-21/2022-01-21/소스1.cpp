#include<stdio.h>
int main() {
	int k, e, m, so, si;
	
	printf("국어 점수를 입력하세요>>");
	scanf_s("%d", &k);
	printf("영어 점수를 입력하세요>>");
	scanf_s("%d", &e);
	printf("수학 점수를 입력하세요>>");
	scanf_s("%d", &m);
	printf("사회 점수를 입력하세요>>");
	scanf_s("%d", &so);
	printf("과학 점수를 입력하세요>>");
	scanf_s("%d", &si);

	float aver = (k + e + m + so + si) / 5;
	
	int iaver = int(aver)/10;
	
	switch (iaver) {
	case 9:
		printf("학점은 A입니다.");
		break;
	case 8:
		printf("학점은 B입니다.");
		break;
	case 7:
		printf("학점은 C입니다.");
		break;

	case 6:
		printf("학점은 D입니다.");
		break;

	default:
		printf("학점은 F입니다.");
		break; 
	}
	return 0;
}