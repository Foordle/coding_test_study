#include<stdio.h>
int main() {

	int num;
	printf("정수를 입력하세요>>>");
	scanf_s("%d", &num);
	if (num % 2 == 0) {
		printf("%d는 짝수", num);
	}
	else{
		printf("%d는 홀수", num);
	}
}