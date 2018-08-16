#include <stdio.h>
int main() {
	int a[10], k;
	scanf("%d", &k);
	
	for (int i = 1; i <= 10; i++)
		a[i - 1] = k * i;
	
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	
}
