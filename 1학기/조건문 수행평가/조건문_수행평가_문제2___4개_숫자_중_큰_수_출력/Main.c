#include <stdio.h>
int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (a > b) printf("%d", a);
	else if (b > c) printf("%d", b);
	else if (c > d) printf("%d", c);
	else printf("%d", d);
}
