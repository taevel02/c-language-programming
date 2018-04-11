#include <stdio.h>
int main() {
	int a, output;
	scanf("%x", &a);
	output = a | 0x5555;
	printf("0x%04x", output);
}

/* 1234 -> 0001 0010 0011 0100
					 0101 0101 0101 0101 -> 0x5555
5775 -> 0101 0111 0111 0101 */
