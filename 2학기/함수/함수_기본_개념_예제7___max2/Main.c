#include <stdio.h>

int max(int a, int b);
int max4(int a, int b, int c, int d);

int max4(int a, int b, int c, int d) {
	int n, m;

	n = max(a, b);
	m = max(c, d);

	return max(n, m);
}

int max(int a, int b) {
	if(a > b)
		return a;
	else
		return b;
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d", max4(a, b, c, d));
}