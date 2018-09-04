#include <stdio.h>
int max(int a, int b);

int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b && a > c)
		printf("%d", max(a, b));
	else if (b > a && b > c)
		printf("%d", max(b, a));
	else if (c > a && c > b)
		printf("%d", max(c, a));
	
}
