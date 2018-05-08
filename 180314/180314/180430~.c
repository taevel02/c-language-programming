/*
규칙찾기
*/

#include <stdio.h>

/*void main() {
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
	
}*/

void main() {
	int s = 0, n, p = 1;
	scanf_s("%d", &n);
	int i = n;

	while (i > 0) {
		s = s + (((i + 1) / 2) * ((i + 1) / 2)) * p;
		if (i > 0) {
			i = i / 2;
			p *= 2;
		} else break;
	}
	printf("%d", s);
}