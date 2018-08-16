#include <stdio.h>
int main() {
	int m, i, j, sum = 0;
	scanf("%d", &m);
	int a[100][100]={0, };
	
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d ", &a[i][j]);
			if (a[i][j] == 1) {
				a[m][j]++;
				a[i][m]++;
			}
		}
	}
	
	for (i = 0; i < m+1; i++) {
		for (j = 0; j < m+1; j++) {
			if (i == m && j == m) break;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
