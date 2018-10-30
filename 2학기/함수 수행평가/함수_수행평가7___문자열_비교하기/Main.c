#include <stdio.h>
#include <string.h>

int string_compare(char a[100], char b[100]) {
	if (strlen(a) == strlen(b))
		return 0;
	else
		return 1;
}

int main() {
	char a[100], b[100];
	scanf("%s %s", a, b);
	
	if (string_compare(a, b) == 0)
		printf("같다");
	else
		printf("다르다");
	return 0;
}
