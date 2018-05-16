#include <stdio.h>
int main() {
	int k, a = 0;
	scanf("%d", &k);
	
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= i; j++) {
			a++;
			printf("%3d", a);
		}
		printf("\n");
	}
	return 0;
}
