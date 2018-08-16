#include <stdio.h>
int main()
{
	int a;
	int b, c, d; // for문 변수
	scanf("%d", &a);

	for (b = 0; b < (a - 1) / 2; b++) { // 세로 몇줄을 출력할 것인지
		for (c = b + 1; c > 0; c--) // 별찍고
			printf("*");
		for (d = a - (2 * b) - 2; d > 0; d--) // 띄어쓰고
			printf(" ");
		for (c = b + 1; c > 0; c--) // 마지막 별찍고 줄바꿈
			printf("*");
		printf("\n");
	}

	for (b = 0; b < a; b++) // 가운데 별 찍고, 입력받은 만큼 찍는거
		printf("*");
	printf("\n");

	for (b = (a - 1) / 2; b > 0; b--) { // 세로 줄 계산 이번에는 반대로
		for (c = b; c > 0; c--) // 별찍기
			printf("*");
		for (d = a - (2 * b); d > 0; d--) // 띄어쓰고
			printf(" ");
		for (c = b; c > 0; c--) // 마지막 별찍고 줄바꿈
			printf("*");
		printf("\n");
	}

	return 0;
}