#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	
	c = a / b;
	if (a < b)
		printf("자를길이오류");
	
	if (c > 9999)
		printf("번호초과오류");
	
	else {
		for (int i = 1; i <= c; i++)
			printf("F-%04d\n", i);
	}
}
