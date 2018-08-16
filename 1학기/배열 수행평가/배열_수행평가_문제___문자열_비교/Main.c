#include <stdio.h>
int main() {
	char a[31];
	char b[31];
	int counta = 0, countb=0,count=0;
	
	scanf("%s %s", a, b);
	while (a[counta] != NULL) counta++;
	while (b[countb] != NULL) countb++;
	
	for (int i = 0; a[i] != NULL; i++) {
		if (a[i] != b[i]) count++;
	}
	
	if (count >= 1 || counta != countb) printf("다르다");
	else printf("같다");
}
