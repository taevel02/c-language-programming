#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main_exit1() {
	int a;
	char b;
	printf("학번을 입력하세요!\n");
	scanf(" %d", &a);
	printf("성별을 입력하세요!(m/f)\n");
	scanf(" %c", &b);
	printf("학번 : %d, 성별 :  %c\n", a, b);
}