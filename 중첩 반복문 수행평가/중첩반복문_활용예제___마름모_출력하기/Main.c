#include <stdio.h>
int main() {
	int k;
	scanf("%d", &k);
	
	for (int i = 1; i <= k/2+1; i++) {
		for (int j = 0; j <= k/2 - i; j++)
			printf(" ");
			
		for (int j = 0; j < 2 * i - 1; j++)
			printf("*");
		
		printf("\n");
	}
	
	for (int i = k/2; i > 0; i--) {
		for (int j = 0; j <= k/2 - i; j++)
			printf(" ");
			
		for (int j = 0; j < 2 * i - 1; j++)
			printf("*");
		
		printf("\n");
	}
	
	return 0;
}
