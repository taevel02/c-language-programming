#include <stdio.h>
int array_sum(int *p, int n) {
	int a = 0;
	for (int i = 0; i < n; i++)
		a += p[i];
	return a;
}

int main() {
	int n, a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d ", &a[i]);
	printf("%d", array_sum(a, n));
	return 0;
}
