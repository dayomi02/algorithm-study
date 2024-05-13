#include <stdio.h>
#include <string.h>

int main() {
	char arr[100] = { 0, };
	int kroCount = 0, wordCount = 0;

	scanf("%s", arr);

	wordCount = strlen(arr);

	for (int i = 0; i < strlen(arr) -1; i++) {
		if (arr[i] == 'c' && arr[i + 1] == '=') {
			kroCount++;
			wordCount -= 2;
			arr[i] = '*'; arr[i + 1] = '*';
		}else if (arr[i] == 'c' && arr[i + 1] == '-') {
			kroCount++;
			wordCount -= 2;
			arr[i] = '*'; arr[i + 1] = '*';
		}else if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i+2] == '=') {
			kroCount++;
			wordCount -= 3;
			arr[i] = '*'; arr[i + 1] = '*'; arr[i + 2] = '*';
		}else if(arr[i] == 'd' && arr[i + 1] == '-') {
			kroCount++;
			wordCount -= 2;
			arr[i] = '*'; arr[i + 1] = '*';
		}else if (arr[i] == 'l' && arr[i + 1] == 'j') {
			kroCount++;
			wordCount -= 2;
			arr[i] = '*'; arr[i + 1] = '*';
		}else if (arr[i] == 'n' && arr[i + 1] == 'j') {
			kroCount++;
			wordCount -= 2;
			arr[i] = '*'; arr[i + 1] = '*';
		}else if (arr[i] == 's' && arr[i + 1] == '=') {
			kroCount++;
			wordCount -= 2;
			arr[i] = '*'; arr[i + 1] = '*';
		}else if (arr[i] == 'z' && arr[i + 1] == '=') {
			kroCount++;
			wordCount -= 2;
			arr[i] = '*'; arr[i + 1] = '*';
		}
	}
	//printf("defore wordCount = %d\n", wordCount);
	//printf("defore kroCount = %d\n", kroCount);

	printf("%d\n", kroCount+wordCount);



	return 0;
}
