#include <stdio.h>

int main_exit4() {
	int n, i = 1;
	scanf_s("%d", &n);

	while (1) {
		i++;
		if (n == 1) {
			printf("소수가 아니다."); break;
		}
		if (n == i) {
			printf("소수이다."); break;
		} else if (n % i == 0) {
			printf("소수가 아니다."); break;
		}
	}
}