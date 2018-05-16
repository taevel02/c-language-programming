#include <stdio.h>
int main() {
	int k;
	scanf("%d", &k);
	
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= k; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
