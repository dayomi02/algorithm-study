#include <stdio.h>

void selfNumber();

int main() {

	selfNumber();

	return 0;
}

void selfNumber() {
	int i, n, sum = 0, constructor[10000] = { 0, };
	for (n = 0; n < 10001; n++) {
		if (n < 10) {
			sum = n + n;
			constructor[sum]++;
		}
		else if (n < 100) {
			sum = n + (n / 10) + (n % 10);
			constructor[sum]++;
		}
		else if (n < 1000) {
			sum = n + (n / 100) + (n % 100) / 10 + (n % 100) % 10;
			constructor[sum]++;
		}
		else if (n < 10000) {
			sum = n + (n / 1000) + (n % 1000) / 100 + ((n % 1000) % 100) / 10 + ((n % 1000) % 100) % 10;
			if (sum <= 10000)
				constructor[sum]++;
		}
	}
	
	
	for (i = 0; i <= 10000; i++)
		if (constructor[i] == 0)
			printf("%d\n", i);


	return 0;

}
