#include <stdio.h>
int main() {
	char word[15] = { 0, };
	int num[15] = { 0, }, max = 0;

	scanf("%s", word);
	//65 ~ 90
	for (int i = 0; i < strlen(word); i++) {
		if ((int)word[i] >= 65 && (int)word[i] <= 67)
			num[i] = 3;
		else if ((int)word[i] >= 68 && (int)word[i] <= 70)
			num[i] = 4;
		else if ((int)word[i] >= 71 && (int)word[i] <= 73)
			num[i] = 5;
		else if ((int)word[i] >= 74 && (int)word[i] <= 76)
			num[i] = 6;
		else if ((int)word[i] >= 77 && (int)word[i] <= 79)
			num[i] = 7;
		else if ((int)word[i] >= 80 && (int)word[i] <= 83)
			num[i] = 8;
		else if ((int)word[i] >= 84 && (int)word[i] <= 86)
			num[i] = 9;
		else if ((int)word[i] >= 87 && (int)word[i] <= 90)
			num[i] = 10;


		max += num[i];
	}

	printf("%d", max);
	return 0;
}
