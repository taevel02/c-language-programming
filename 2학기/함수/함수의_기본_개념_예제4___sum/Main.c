#include <stdio.h>
int sum(int a, int b);

int sum(int a, int b) {
	int sum = 0, sum2 = 0;
	for (int i = 0; i <= a; i++)
		sum += i;
	
	for (int i = 0; i <= b; i++)
		sum2 += i;
	
	return printf("%d", sum+sum2);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	sum(a, b);
}
