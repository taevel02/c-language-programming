#include <stdio.h>
int CountBigNumber(int n, int *m, int a) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (m[i] > a)
			count++;
	}
	return count;
}

int main() {
	int n;
	scanf("%d", &n);
	int m[n];
	
	for (int i = 0; i < n; i++)
		scanf("%d", &m[i]);
	
	int a;
	scanf("%d", &a);
	
	printf("%d", CountBigNumber(n, m, a));
}
