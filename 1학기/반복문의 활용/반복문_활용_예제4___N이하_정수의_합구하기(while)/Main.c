#include <stdio.h>

int main() {
	int i = 0, n, sum = 0;
	scanf("%d", &n);

	if (n > 0) {
		while (i <= n) {
			sum += i;
			i++;
		}
		printf("%d", sum);
	}
	
	return 0;
}