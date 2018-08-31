#include <stdio.h>
int sum(int a, int b, int c);

int sum(int a, int b, int c) {
	return a+b+c;
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	printf("%d", sum(a, b, c));
}
