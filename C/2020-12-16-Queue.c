//¼±Çü Å¥
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int front = 0, rear = -1;
int queue[MAX] = { 0, };

int ADD(int data) {
	if (rear == MAX - 1) {
		printf("Queue is full\n");
		return -1;
	}
	queue[++rear] = data;
	return 0;
}
int DELETE() {
	if (front > rear) {
		printf("Queue is empty\n");
		return -1;
	}
	return queue[front++];
}
int main() {
	ADD(10); ADD(20); ADD(30);
	printf("%d\n", DELETE());
	printf("%d\n", DELETE());
	ADD(40); ADD(50); ADD(60); 

	return 0;
}
