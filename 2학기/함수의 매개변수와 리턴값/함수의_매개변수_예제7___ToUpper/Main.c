#include <stdio.h>

void toUpper(char *p) {
	while (*p) {
		if (*p >= 'a' && *p <= 'z')
			*p = *p - ('a' - 'A');
		p++;
	}
}

int main() {
	char *ch[100];
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%s\n", ch);
		toUpper(ch);
		printf("%s\n", ch);
	}
	
	
}
