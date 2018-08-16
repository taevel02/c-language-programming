#include <stdio.h>
int main() {
	int n1, n2, a[100], b[100];
	
	scanf("%d", &n1);
	int *p = a;
	for (int i = 0; i < n1; i++)
		scanf("%d ", p+i);
	
	scanf("%d", &n2);
	int *q = b;
	for (int i = 0; i < n2; i++)
		scanf("%d ", q+i);
	
	for (;;) {
		if (p-a < n1) {
			printf("%d ", *p);
			p++;
		}
		if (q-b < n2) {
			printf("%d ", *q);
			q++;
		}
		if (p-a >= n1 && q-b >= n2)
			break;
	}
}
