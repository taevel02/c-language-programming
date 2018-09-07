#include <stdio.h>
int max(int *p, int n) {
	int m = p[0];
	for (int i = 1; i < n; i++) {
		if (m < p[i])
			m = p[i];
	}
	return m;
}

int main() {
	int n, a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d ", &a[i]);
	printf("%d", max(a, n));
	return 0;
}
