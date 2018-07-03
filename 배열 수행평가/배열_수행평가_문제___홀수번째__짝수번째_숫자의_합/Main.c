#include <stdio.h>
int main() {
	int k, sum1 = 0, sum2 = 0;
	scanf("%d", &k);
	int a[k];
	
	for (int i = 0; i < k; i++)
		scanf("%d ", &a[i]);
	
	for (int i = 0; i < k; i++) {
		if (i % 2 != 0)
			sum1 += a[i];
		else
			sum2 += a[i];
	}
	
	printf("%d %d", sum2, sum1);
}
