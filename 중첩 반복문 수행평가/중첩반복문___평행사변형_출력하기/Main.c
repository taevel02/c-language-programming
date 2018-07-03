#include <stdio.h>
void main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int i, j, k, l; // for문을 돌릴 때 필요

	for (i = a; i>0; i--) // 첫번째 줄
		printf("*");
	printf("\n");

	for (j = 1; j <= b - 2; j++) { // 띄어쓰고 별찍고 띄어쓰고 별찍음과 동시에 줄바꿈
		
		for (k = j; k > 0; k--) // j만큼 띄고 별찍고
			printf(" ");
		printf("*");

		for (l = a - 2; l > 0; l--) // l만큼 띄고 별찍음+줄바꿈
			printf(" ");
		printf("*\n");

	}

	for (i = j; i > 0; i--) // 마지막 줄 띄어쓰기
		printf(" ");

	for (i = a; i > 0; i--) // 마지막 줄
		printf("*");
}