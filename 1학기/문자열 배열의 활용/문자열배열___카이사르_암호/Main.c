#include <stdio.h>

int main() {
	char S[100] = {0};
	int k;

	scanf("%s", S);
	scanf("%d", &k);

	for (int i = 0; S[i] != NULL; i++) {
		if (S[i] >= 'A' && S[i] <= 'Z')
			printf("%c", (S[i] + k-'A')%26 + 'A');
		else if (S[i] >= 'a' && S[i] <= 'z')
			printf("%c", (S[i] + k-'a')%26 + 'a');
	}
	
	return 0;
}
