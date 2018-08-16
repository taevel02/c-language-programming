#include <stdio.h>
void main() {
	int a, b, c, d;
	scanf("%d.%d.%d %d", &a, &b, &c, &d);
	
	if ((a+b+c+d)%1000%100/10 % 3 == 0)
		printf("대박나는 해");
	else if ((a+b+c+d)%1000%100/10 % 3 == 1)
		printf("무난한 해");
	else if ((a+b+c+d)%1000%100/10 % 3 == 2)
		printf("운이 안좋은 해");
}
