#include <stdio.h>
int main() {
	int k, sum = 0;
	int head = 1, mid = 2, rear = 0;
	scanf("%d", &k);
	
	for (int i = 1; head < k; i++) {
		if (k == 1) break;
		rear = head;
		head = mid;
		mid = head + rear;
		if (i % 2 == 1)
			sum += rear;
	}
	
	printf("%d", sum);
	return 0;
}
