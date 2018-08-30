#include <stdio.h>
int main() {
	int a[4][4];
	int sum = 0;
	int *p = a;
	
	for (int i = 0; i < 16; i++)
		scanf("%d", p++);
	p = a;
	
	for (int i = 0; i < 4; i++)
		sum += *(p+i*5);
	
	printf("%d", sum);
	
	return 0;
}
