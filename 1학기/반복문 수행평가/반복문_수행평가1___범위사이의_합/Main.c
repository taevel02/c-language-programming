#include <stdio.h>
void main() {
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);
	
	while (a <= b) {
		sum += a;
		a++;
	}
	
	printf("%d", sum);
}
