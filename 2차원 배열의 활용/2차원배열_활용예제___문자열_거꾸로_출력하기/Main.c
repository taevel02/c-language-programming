#include <stdio.h>
int main() {
	char ch[5][101];
	
	for (int i = 0; i < 5; i++)
		scanf("%s", ch[i]);
	
	for (int i = 4; i >= 0; i--)
		printf("%s ", ch[i]);
	
	return 0;
}
