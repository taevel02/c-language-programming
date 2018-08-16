#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	
	int asdf[2][n];
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &asdf[0][i], &asdf[1][i]);
	}
	
	for (int i = 0; i < n; i++) {
		if ((asdf[0][i] + asdf[1][i]) >= 90) 
			printf("%d %d A\n", asdf[0][i], asdf[1][i]);
		else if ((asdf[0][i] + asdf[1][i]) >= 80 && (asdf[0][i] + asdf[1][i]) < 90) 
			printf("%d %d B\n", asdf[0][i], asdf[1][i]);
		else
			printf("%d %d C\n", asdf[0][i], asdf[1][i]);
	}
}
