#include <stdio.h>
int main() {
	int a, output;
	scanf("%x", &a);
	output = a^0xffff;
	printf("0x%04x", output);
}

/*
1234 -> 0001 0010 0011 0100

				1001 1101 1100 1011
				1111 1000 1000 1000 -> 15 8 8 8 -> f888
6543 -> 0110 0101 0100 0011
*/