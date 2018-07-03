#include <stdio.h>

int main(void)
{
	int i, max = 0;
	char a[31];
	int count[26] = {0};

	scanf("%s", a);
	
	for (i = 0; a[i] != NULL; i++)
		count[a[i]-'a']++;

	for (i = 0; i < 26; i++) {
		if (count[max] < count[i])
			max = i;
	}

	printf("%c", 'a'+max);

	return 0;
}