// malloc 함수
/*#include <stdio.h>
#include <stdlib.h>

int * make_array(int size);

int main() {
	int *a = make_array(10);
	for (int i = 0; i < 10; i++)
		a[i] = i;
	for (int i = 0; i < 10; i++)
		printf("%d", a[i]);
	return 0;
}

int * make_array(int size) {
	int (*a)[4] = (int *)malloc(sizeof(int) * 5*4);
	return a;
}*/

// ############################################################################
// ############################################################################

// 함수 포인터
/*#include <stdio.h>

int sum(int a, int b) {
	return a+b;
}

int mul(int a, int b) {
	return a*b;
}

int cal(int a, int b, int (*p)(int, int)) {
	return p(a, b);
}

int (*cal2(char c))(int, int) {
	if (c == '+')
		return sum;
	else if (c == 'x')
		return mul;
}

int main() {
	int a, b;
	char c;
	scanf("%d%c%d", &a, &c, &b);
	if (c == '+')
		printf("%d", cal(a, b, sum));
	else if (c == '*')
		printf("%d", cal(a, b, mul));
		
	printf("%d", cal2(c)(a, b));
	return 0;
}*/

#include <stdio.h>
void print_N(int n) {
	if (n < 1)
		return 1;
	else {
		print_N(n - 1);
		printf("%d ", n);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	print_N(n);
}