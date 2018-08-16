#include <stdio.h>
int main() {
	int arr[7], sum;
	
	for (int i = 0; i < 7; i++)
		scanf("%d", &arr[i]);
	
	for (int i = 0; i < 7; i++)
		sum += arr[i];
	
	printf("%d\n", sum);
	printf("%.2lf", (double)sum/7);
	
	return 0;
}
