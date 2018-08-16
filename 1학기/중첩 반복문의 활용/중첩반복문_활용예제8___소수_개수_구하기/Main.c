#include <stdio.h>
int main() {
	int k, count = 0;
	scanf("%d", &k);
	
	for (int i = 2; i < k; i++) {
		int temp = 0;
		
		for (int j = 2; j < i; j++) {
			if (!(i % j))
				temp++;
		}
		
		if(!temp)
			count++;
	}
	
	printf("%d", count);
	return 0;
}
