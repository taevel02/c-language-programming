#include <stdio.h>
int main() {
	char a[31], temp;
	scanf("%s", a);
	
	int count = 0;
	while (a[count] != NULL) count++;
	
	temp = a[count-1];
	a[count-1] = a[0];
	a[0] = temp;
	
	for (int i = 0; i < count; i++)
		printf("%c", a[i]);
}
