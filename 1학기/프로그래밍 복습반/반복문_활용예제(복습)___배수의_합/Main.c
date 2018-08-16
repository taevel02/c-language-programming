#include <stdio.h>
int main() {
	int a, b, sum = 0;
	scanf("%d", &a);
	
	for (int i = 1; ; i++)
	{
		b = a * i;
		if(b > 100)
			break;
		sum += b;
	}
	printf("%d", sum);
}
