#include <stdio.h>
int main() {
	int n, i;
	int a[100];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	int minindex, j, temp;
	for (i = 0; i < n - 1; i++) {
		minindex = i;
		for (j = i + 1; j < n; j++) {
			if (a[minindex] < a[j])
				minindex = j;
		}
		temp = a[minindex];
		a[minindex] = a[i];
		a[i] = temp;
	}
	
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
