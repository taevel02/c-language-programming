#include <stdio.h>
int main() {
	int k, i;
	scanf("%d", &k);
	
	for (i = 0; k != 0; i++)
		k /= 10;
	
	printf("%d", i);
	
	return 0;
}
