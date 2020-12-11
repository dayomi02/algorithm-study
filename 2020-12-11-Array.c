#include <stdio.h>
#include <stdlib.h>
#define num 42
int main() {
	/*
	int n, min= 1000001, max = -1000001;
	int *arr;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d %d", min, max);
/	/	/	/	/	/	/	/	/	/	/
	int max = 0, count = 0;
	int arr[9];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i = 0; i < 9; i++) {
		count++;
		if (arr[i] == max)
			break;
	}
	printf("%d\n%d\n", max, count);

/	/	/	/	/	/	/	/	/	/	/
	int a, b, c, number, index;
	int arr[10] = { 0 };

	scanf("%d %d %d", &a, &b, &c);
	number = a * b * c;

	while (1) {
		if (number >= 10) {
			index = number % 10;
			arr[index]++;
			number /= 10;
		}
		else {
			arr[number]++;
			break;
		}
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
/	/	/	/	/	/	/	/	/	/	/ 이 문제 이상함
	int n, count = 10;
	int arr[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		arr[i] = n % 42;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j])
				count--;
		}
	}
	printf("%d", count);
/	/	/	/	/	/	/	/	/	/	/
	int N,i;
	double max = 0.0, sum = 0.0;
	scanf("%d", &N);
	double *arr = (double*)malloc(sizeof(double)*N);
	for (i = 0; i < N; i++) 
		scanf("%lf", &arr[i]);
	for (i = 0; i < N; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	for (i = 0; i < N; i++) {
		sum += arr[i] / max * 100;
	}
	printf("%lf", sum / N);
/	/	/	/	/	/	/	/	/	/	/
*/
	int i, n, con = 1;
	char check;
	char arr[80] = { 0 };
	scanf("%d", &n);
	int* count = (int*)malloc(sizeof(int) * 5);

	for (i = 0; i < n; i++) {
		while (1) {
			scanf("%c", &check);
			if (check == "O") {
				count[i] = count[i] + con;
				con++;
			}
			else if (check == "X") {
				con = 1;
			}
			else
				break;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d\n", count[i]);


	return 0;
	
}

/*

#include <stdio.h>
int main() {


	return 0;
}

*/