#include <stdio.h>
void clean(char *p, char *m) {
	int i = 0;
	while (*p) {
		if (*p >= 'a' && *p <= 'z')
			m[i++] += *p;
		p++;
	}
}

int main() {
	char ch[100], modi[100] = {0};
	scanf("%s", ch);
	clean(ch, modi);
	printf("%s", modi);
	return 0;
}
