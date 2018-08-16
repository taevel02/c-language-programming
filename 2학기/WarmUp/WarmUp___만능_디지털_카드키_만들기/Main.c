#include <stdio.h>
int main() {
	int a, b, c, r = 1;
	scanf("%d %d %d", &a, &b, &c);
	
	while (r > 0) {
		r = a % b;
		a = b;
		b = r;
	}
	
	r = 1;
	while (r > 0) {
		r = a % c;
		a = c;
		c = r;
	}
	
	printf("%d", a);
}
