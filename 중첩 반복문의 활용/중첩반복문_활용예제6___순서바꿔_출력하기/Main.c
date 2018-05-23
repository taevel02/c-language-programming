#include <stdio.h>
int main() {
	int k, a = 0, temp = 0;
	scanf("%d", &k);
	
	for (int i = 1; i <= k; i++) { // 세로줄
		if (i % 2 == 1) {
			for (int j = 1; j <= k; j++) {
				a++;
				printf("%2d ", a);
			}
		}
		if (i % 2 == 0) {
			for (int j = 1; j <= k; j++) {
				printf("%2d ", a);
				a--;
			}
		}
		a += k;
		printf("\n");
	}
	
	return 0;
}
