#include <stdio.h>
int main() {
	char a[100];
	scanf("%s", a);
	
	int i = 0;
	char *p = a;
	
	while (*p++)
		i++;
	
	printf("%d", i);
}
