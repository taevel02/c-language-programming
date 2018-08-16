#include <stdio.h>
int main() {
	int a[101][101];
	int m, n, i, j, maxRow = 0, maxCol = 0, maxDia = 0;
	scanf("%d %d", &m, &n);
	
	// input or maxRow?
	for (i = 0; i < m; i++) {
		maxRow = a[i][0];
			
		for (j = 0; j < n; j++) {
			scanf("%d ", &a[i][j]);
			
			if (maxRow < a[i][j])
				maxRow = a[i][j];
		}
		
		a[i][j] = maxRow;
	}
	
	// maxColum?
	for (j = 0; j < n; j++) {
		maxCol = a[0][j];
		
		for (i = 0; i < m; i++) {
		if (maxCol < a[i][j])
			maxCol = a[i][j];
		}
		
		a[i][j] = maxCol;
	}
	
	// maxDia ?
	maxDia = a[0][0];
	for (i = 0; i < m; i++) {
		if (maxDia < a[i][i])
			maxDia = a[i][i];
	}
	a[i][i] = maxDia;
	
	// output
	for (i = 0; i < m+1; i++) {
		for (j = 0; j < n+1; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
