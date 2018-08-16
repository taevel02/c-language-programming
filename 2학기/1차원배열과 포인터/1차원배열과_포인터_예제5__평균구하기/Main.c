#include <stdio.h>
int main() {
	int n, a[100], sum = 0;
	int *p = a;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", p++);
		sum += a[i];
	}
	
	printf("%.2f", (float)sum/n);
}
