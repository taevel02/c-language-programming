#include <stdio.h>
int main() {
	float a, b;
	char c;
	scanf("%f%c%f", &a, &c, &b);
	
	if (c == '+')
		printf("%.2f", a+b);
	else if (c == '-')
		printf("%.2f", a-b);
	else if (c == '*')
		printf("%.2f", a*b);
	else if (c == '/')
		printf("%.2f", a/b);
	else
		printf("잘못된 연산자입니다.");
}
