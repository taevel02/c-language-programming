#include <stdio.h>
int main() {
	int n, sum = 0, temp = 0;
	scanf("%d", &n);
	int a[n];
	
	for (int i = 0; i < n; i++)
		scanf("%d ", &a[i]);
	
	for (int i = 0; i < n-1; i++) {
		temp = a[i+1] - a[i];
		printf("%d ", temp);
		sum += temp;
	}
	printf("\n%d", sum);
	
}