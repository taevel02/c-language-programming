#include <stdio.h>

void main() {
	int i = 1;

	while (1) {
		if (i > 100)
			break;

		i++;
			
		if (i % 2 == 1)
			continue;

		printf("%d\n", i);
	}
}