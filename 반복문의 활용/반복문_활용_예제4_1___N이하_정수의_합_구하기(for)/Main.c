#include <stdio.h>

int main() {
	int n, sum = 0;
	scanf("%d", &n);

	if (n > 0) {
		for (int i = 0; i <= n; i++)
			sum += i;
		printf("%d", sum);
	}
	
	return 0;
}