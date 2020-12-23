#include <stdio.h>
int main() {

	int n, sum = 0;
	char input[100] = { 0, };

	scanf("%d",&n);
	scanf("%s", input);

	//printf("%d\n", n);
	//printf("%c", input);

	for (int i = 0; i < n; i++) {
		sum += input[i] - '0';
	}

	printf("%d", sum);

	return 0;
}