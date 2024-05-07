#include <stdio.h>
#include <stdlib.h>

#define MAX 6

struct node {
	int data;
	struct node* link;
};
struct node *top = NULL;
int cnt = 0;

int PUSH(int data) {
	struct node* addNode;
	if (cnt >= MAX) {
		printf("Stack overflow\n");
		return -1;
	}
	addNode = (struct node*)malloc(sizeof(struct node));
	addNode->data = data;
	addNode->link = top;
	top = addNode;
	cnt++;
	return 0;
}

int POP() {
	int data;
	struct node* delNode = top;
	if (top == NULL) {
		printf("Stack Undeflow\n");
		return -1;
	}
	data = top->data;
	top = top->link;
	free(delNode);
	cnt--;
	return data;
}

int main() {
	struct node* freeNode;
	PUSH(10); PUSH(20); PUSH(30);
	printf("POP: %d\n", POP());
	PUSH(40); PUSH(50); PUSH(60); PUSH(70); PUSH(80);

	printf("½ºÅÃ µ¥ÀÌÅÍ Á¶È¸ : ");
	while (top != NULL) {
		printf("%d ", top->data);
		freeNode = top;
		top = top->link;
		free(freeNode);
	}
	return 0;
}
