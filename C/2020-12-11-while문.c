#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	/*

	int a, b = 1;

	while (1) {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		printf("%d\n", a+b);
	}

	int a, b = 1;
	while (scanf("%d %d", &a, &b) != EOF) {
		//소스로부터 더이상 읽을 수 있는 데이터가 없을 경우 EOF
		printf("%d\n", a + b);
	}
		*/

	int a, b, c, d;
	int Number;
	int result;
	int count = 0 ;
	scanf("%d", &Number);
	result = Number;
	while (1) {
		a = Number / 10;
		b = Number % 10;
		c = (a + b) % 10;
		d = b * 10 + c; 
		Number = d;	//새로운 수
		count++;
		if (d == result) {
			printf("%d", count);
			break;
		}
	}




	return 0;
}


/*

#include <stdio.h>
int main() {


	return 0;
}

*/
