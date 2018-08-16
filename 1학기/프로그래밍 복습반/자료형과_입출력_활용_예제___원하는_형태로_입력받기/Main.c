#include <stdio.h>
int main() {
	char a[2];
	int b;
	scanf("%2s%4d", &a, &b);
	
	printf("%2s%04d", a, b+1);
}
