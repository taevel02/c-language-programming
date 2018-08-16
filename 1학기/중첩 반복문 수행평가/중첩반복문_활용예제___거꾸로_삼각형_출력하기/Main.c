#include <stdio.h>
int main() {
	int k;
	scanf("%d", &k);
	
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < k - i; j++)
			printf(" ");
			
		for (int j = 0; j <= i - 1; j++)
			printf("*");
		
		printf("\n");
	}
	
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j < i; j++)
			printf(" ");
		
		for (int j = 0; j < k - i; j++)
			printf("*");
		
		printf("\n");
	}
	
	return 0;
}
