	#include <stdio.h>
	#include <string.h>

	int main() {
		int num, chNum = 0;
		char wordArr[100] = { 0, };

		scanf("%d", &num);

		for (int i = 0; i < num; i++) {
			int alpha[26] = { 0 };
			scanf("%s", wordArr);			
			for (int j = 0; j < strlen(wordArr); j++) {
				alpha[(int)wordArr[j] - 97]++;
				if (alpha[(int)wordArr[j] - 97] > 1 && wordArr[j] != wordArr[j - 1]) {
						chNum--;
						break;
				}
			}
		}

		printf("%d\n", num + chNum);

		return 0;
	}
