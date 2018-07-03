#include <stdio.h>
int main() {
	int a[10], k;
	scanf("%d", &k);
	
	for (int i = 0; i < 10; i++)
		printf("%d.%d ", k, i);
}
