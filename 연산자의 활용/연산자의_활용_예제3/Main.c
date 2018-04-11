#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	printf("%d달러 %d센트", a/1071, a*100/1071-a/1071*100);
}
