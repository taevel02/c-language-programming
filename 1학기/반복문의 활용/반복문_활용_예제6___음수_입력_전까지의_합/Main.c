#include <stdio.h>

int main() {
	int n, sum = 0;
	
	do {
		scanf("%d", &n);
		
		if (n < 0) {
			printf("%d", sum);
			return 0;
		} else sum+=n;
	}while(1);
}