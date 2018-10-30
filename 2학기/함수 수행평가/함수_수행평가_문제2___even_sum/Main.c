#include <stdio.h>
int even_sum(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 2 == 0)
			sum += i;
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	
	printf("%d", even_sum(n));
}
