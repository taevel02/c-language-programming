#include <stdio.h>
char * substring(char *p, int index) {
	return p+index;
}

int main() {
	char ch[100];
	int index;
	scanf("%s %d", ch, &index);
	printf("%s", substring(ch, index));
	return 0;
}
