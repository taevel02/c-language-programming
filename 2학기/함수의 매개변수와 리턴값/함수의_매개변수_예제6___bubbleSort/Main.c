#include <stdio.h>

int bubbleSort(int n, int *a) {
	int temp, i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j+ 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	
	for (i = 0; i < n; i++)
		printf("%d ", *(a+i));
}

int main() {
	int n, a[100];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", a+i);
	
	bubbleSort(n, a);
}
