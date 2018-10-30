#include <stdio.h>
void reverse_string(char *input) {
	int leng = 0;
	char temp;
	while (input[leng] != '\0')
		leng++;
	
	for (int i = 0; i < leng/2; i++) {
		temp = input[i];
		input[i] = input[leng - i - 1];
		input[leng - i - 1] = temp;
	}
}

int main() {
	char input[100];
	scanf("%s", input);
	reverse_string(input);
	printf("%s", input);
	return 0;
}
