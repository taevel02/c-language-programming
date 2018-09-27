#include <stdio.h>
int odd_sum(int a, int b) {
	if (a > b)
		return 0;
	if (a % 2)
		return a + odd_sum(a+1, b);
	else
		return odd_sum(a+1, b);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", odd_sum(a, b));
}
