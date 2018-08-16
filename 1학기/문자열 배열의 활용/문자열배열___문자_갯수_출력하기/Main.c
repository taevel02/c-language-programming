#include <stdio.h>

int main() {
	char name[100] = {0};
	char check;
	int amount = 0;

	scanf("%s", name);
	scanf("%s", &check);

	for (int a = 0; a < 100; a++) {
		if (name[a] == check) amount++;
	}
	
	printf("%d", amount);

	return 0;
}
