#include <stdio.h>
int main() {
	int n, i = 0;
	scanf("%d", &n);
	
	int arr[n];
	for (i = 0; i < n; i++)
		scanf("%d ", arr+i);
	
	int *l = arr + n - 1;
	int b = 0;
	for (i = 0; b < n / 2; i++) {
		printf("%d %d ", arr[i], *(l-i));
		b += 1;
	}
	
	if (n % 2 != 0)
		printf("%d", arr[i]);
}
