#include <stdio.h>
int sum_position(int n) {
	int r, sum = 0;
	
	 while(n != 0){
		 r = n % 10;
		 sum += r;
		 n = n / 10;
	}
	
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	
	printf("%d", sum_position(n));
}
