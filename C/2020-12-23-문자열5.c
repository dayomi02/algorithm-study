#include <stdio.h>
#include <string.h>

int main() {
	char S[1000001];
	int i, data = 0, index, alphabet[26] = { 0, };
	
	scanf("%s", S);

	for (i = 0; i < strlen(S); i++) {
		if ((int)S[i] >= 97 && (int)S[i] <= 122)
			alphabet[(int)S[i] - 97]++;
		else
			alphabet[(int)S[i] - 65]++;
	}

	for (i = 0; i < 26; i++) {
		if (alphabet[i] > data) {
			index = i;
			data = alphabet[i];
		}
		else if (alphabet[i] == data)
			index = -2;
	}

	printf("%c", index + 65);


	return 0;
}
