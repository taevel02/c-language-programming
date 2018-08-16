#include <stdio.h>
int main() {
	int n, i, j, temp, a[100];
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for (i = 0; i < n; i++) {
		temp = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (temp < a[j]) {
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for (i = n - 1; i >= 0; i--)
		printf("%d ", a[i]);
}
