#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	
	float asdf[100][100]={0};
	
	for (int i = 0; i < n; i++)
		scanf("%f %f %f", &asdf[0][i], &asdf[1][i], &asdf[2][i]);
	
	for (int i = 0; i < n; i++)
		printf("%5.1f %5.1f %5.1f %5.1f \n", asdf[0][i], asdf[1][i], asdf[2][i], (asdf[0][i]+asdf[1][i]+asdf[2][i])/3);
	
	for (int i = 0; i < 3; i++) {
		for(int j = 0; j < n; j++)
			asdf[i][n] += asdf[i][j];
		
		asdf[i][n] = asdf[i][n] / n;
		printf("%5.1f ", asdf[i][n]);
	}
	printf("\n");
	
}
