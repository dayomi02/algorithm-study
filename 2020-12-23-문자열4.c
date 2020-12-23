#include <stdio.h>
#include <string.h>

int main() {
	int t, r, i, j, k;
	char S[21];

	scanf("%d", &t);

	for (i = 0; i < t; i++) {

		scanf("%d %s", &r, S);

		for (j = 0; j < strlen(S); j++) 
			for (k = 0; k < r; k++) 
				printf("%c", S[j]);

		printf("\n");
	}
	return 0;
}
