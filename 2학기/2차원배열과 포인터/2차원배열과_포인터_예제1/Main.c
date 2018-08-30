#include <stdio.h>
int main() {
	int a[3][3];
	int *p = a;
	
	for (int i = 0; i < 9; i++)
		scanf("%d", p++);
	p = a;
	
	for (int i = 0; i < 3; i++)
		printf("%d\n", *(p+i*3));
	
	return 0;
}
