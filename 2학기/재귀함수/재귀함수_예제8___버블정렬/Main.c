#include <stdio.h>
void bubbleSort(int *a, int n) {
	int temp;
	if (n == 1)
		return ;
	else {
		for (int i = 0; i < n-1; i++) {
			if (a[i] > a[i+1]) {
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		bubbleSort(a, n-1);
	}
}

int main() {
	int a, n[100];
	scanf("%d", &a);
	
	for (int i = 0; i < a; i++)
		scanf("%d ", &n[i]);
	
	bubbleSort(n, a);
	
	for (int i = 0; i < a; i++)
		printf("%d ", n[i]);
	return 0;
}
