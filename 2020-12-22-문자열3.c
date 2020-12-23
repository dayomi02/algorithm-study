#include <stdio.h>
int main() {
	int i, arr[26];
	char s[100];

	for (i = 0; i < 26; i++)
		arr[i]=-1;

	scanf("%s", s);

	for (i = 0; i < strlen(s); i++) 
		if (arr[(int)s[i] - 97] == -1) 
			arr[(int)s[i] - 97] = i;
	
	for (i = 0; i < 26; i++) 
		printf("%d ", arr[i]);
	
	return 0;
}
// 97 ~ 122 => 26