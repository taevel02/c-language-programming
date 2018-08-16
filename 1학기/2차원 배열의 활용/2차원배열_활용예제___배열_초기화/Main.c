#include <stdio.h>
int main() {
	int m, n, count = 1;
	scanf("%d %d", &m, &n);
	
	int arr[m][n];
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf(" %2d ", count);
			count++;
		}
		printf("\n");
	}
}
