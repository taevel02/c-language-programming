#include <stdio.h>
int main() {
	int k, sum = 0;
	scanf("%d", &k);
	
	for (int i = k; i < 1000000; i *= k) {
		sum += i;
	}
	
	printf("%d", sum);
	return 0;
}
