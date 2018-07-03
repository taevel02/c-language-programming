#include <stdio.h>
int main() {
	int n, i, temp = 0, temp2, check = 0;
	scanf("%d", &n);
	
	int asdf[100][100]={0};
	
	for (i = 0; i < n; i++)
		scanf("%d %d %d", &asdf[0][i], &asdf[1][i], &asdf[2][i]);
	
	for (i = 0; i < n; i++) {
		temp2 = (asdf[0][i]+asdf[1][i]+asdf[2][i]);
		if (temp <= temp2) {
			check = i;
			temp = temp2;
		}
	}
	
	printf("%d", check + 1);
	
}
