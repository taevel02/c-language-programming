#include <stdio.h>

int main() {
	char name[20];
	int count = 0;

	scanf("%s", name);

	while (name[count] != NULL) count++;
	printf("%d", count);

	return 0;
}
