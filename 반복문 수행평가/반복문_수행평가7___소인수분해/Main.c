#include <stdio.h>
int main() {
	int n;
	// counter
	int two = 0, three = 0, five = 0;
	
	scanf("%d", &n);
	
	for (two = 0; n % 2 == 0; two++)
		n /= 2;
	
	if (n != 1) {
		for (three = 0; n % 3 == 0; three++)
			n /= 3;
		
		if (n != 1) {
			for (five = 0; n % 5 == 0; five++)
				n /= 5;
		}
	}
	
	printf("%d %d %d", two, three, five);
	
	return 0;
}
