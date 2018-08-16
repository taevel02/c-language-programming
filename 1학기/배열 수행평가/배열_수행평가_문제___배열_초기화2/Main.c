#include <stdio.h>
int main() {
	char a[10];
	
	char k;
	scanf("%c", &k);
	
	for (int i = 0; i < 10; i++)
		a[i] = (i + k - 'A') % 26 + 'A';
	
	for (int i = 0; i < 10; i++)
		printf("%c ", a[i]);
	
}