#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	
	printf("십의자리 : %d\n", (a/10));
	printf("일의자리 : %d", (a%10));
}
