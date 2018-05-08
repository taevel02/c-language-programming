#include <stdio.h>
int main() {
	int k, tmp = 3, sum = 3;
	scanf("%d", &k);
	
	for (int i = 1; i < k; i++) {
		tmp = tmp * 2 + 3;
		sum += tmp;
	}
	printf("%d", sum);
}
