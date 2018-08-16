#include <stdio.h>
void main() {
	int a, b, sum;
	scanf("%d:%d", &a, &b);
	
	if (a == 0 && b < 35) {
		sum = a*60+b-35+60;
		printf("%02d:%02d", a+24-1, sum%60);
	} else if (a == 1 && b < 35) {
		sum = a*60+b-35+60;
		printf("%02d:%02d", a+12-1, sum%60);
	} else {
		sum = a*60+b-35;
		printf("%02d:%02d", sum/60, sum%60);
	}
}
