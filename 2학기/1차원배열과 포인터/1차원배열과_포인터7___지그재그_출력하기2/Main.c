#include <stdio.h>
int main() {
	int n, a[100];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		scanf("%d ", a+i);
	
	int *p = a+n-1; // &a[n-1]
	
	for (int i = n-1; i >= 0; i--)
		printf("%d ", *p--);
}
