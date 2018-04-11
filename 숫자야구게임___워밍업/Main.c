#include <stdio.h>

void main() {
	int a, b, c, sum = 0, summ = 0;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == 1) sum++;
	if (b == 2) sum++;
	if (c == 3) sum++;
	
	if (a == 2 || a == 3) summ++;
	if (b == 1 || b == 3) summ++;
	if (c == 1 || c == 2) summ++;
	
	printf("%dStrike %dBall", sum, summ);
}
