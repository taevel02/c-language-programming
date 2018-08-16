#include <stdio.h>

int main() {
	char asdf[100] = {0};

	scanf("%s", asdf);

	for (int a = 0; a < 100; a++) {
		if (asdf[a] <= 90) asdf[a] += 32;
		else if (asdf[a] >= 97) asdf[a] -= 32;
		printf("%c", (char)asdf[a]);
	}

	return 0;
}
