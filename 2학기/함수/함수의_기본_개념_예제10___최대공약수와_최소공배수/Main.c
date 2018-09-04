#include <stdio.h>

int gcd(int a, int b) {
	int i = a;
	while (1) {
		if (a % i == 0 && b % i == 0)
			break;
		else
			i--;
	}
	return i;
}

int lcd(int a, int b) {
	int i = a;
	while (1) {
		if (i % a == 0 && i % b == 0)
			break;
		else i += a;
	}
	return i;
}

int main() {
	int n;
	scanf("%d", &n);
	
	int a, b;
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d %d\n", gcd(a, b), lcd(a, b));
	}
}
