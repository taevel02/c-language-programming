/*
규칙찾기
*/

#include <stdio.h>

void main() {
	int a, b, tmp;
	scanf_s("%d %d", &a, &b);

	for (int i = 3; i <= 10; i++) {
		tmp = a + b;
		a = b;
		b = tmp;
		printf("%d ", tmp);
	}
	printf("\n");
	printf("%d\n", tmp);
	
}