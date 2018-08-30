#include <stdio.h>
int main() {
	char a[3][100];
	char (*p)[100] = a;
	
	for (int i = 0; i < 3; i++)
		scanf("%s", p[i]);
	
	int index;
	scanf("%d", &index);
	
	for (int i = 0; i < 3; i++)
		printf("%c", *(p[i]+index-1));
	
	return 0;
}
