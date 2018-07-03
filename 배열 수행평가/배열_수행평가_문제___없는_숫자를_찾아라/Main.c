#include <stdio.h>
int main() {
	int a[10] = {0}, n, count = 0;
	
	for (int i = 0; i < 10; i++) {
		scanf("%d ", &n);
		a[n]++;
	}
	
	for (int i = 0; i < 10; i++) {
		if (a[i] >= 1)
			count++;
		else
			printf("%d ", i);
	}
	
	if (count == 10)
		printf("NULL");
	
}
