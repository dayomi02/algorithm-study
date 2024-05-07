#include <stdio.h>
#include <stdlib.h>

//연결리스트로 만들 구조체 변수 선언
typedef struct NODE {
	int data;
	struct NODE* next;
}node;

int main(void) {
	node* head = (node*)malloc(sizeof(node));
	head->next = NULL;

	node* node1 = (node*)malloc(sizeof(node));
	node1->next = head->next;
	node1->data = 10;
	head->next = node1;

	node* node2 = (node*)malloc(sizeof(node));
	node2->next = node1->next;
	node2->data = 20;
	node1->next = node2;

	//노드 순환 변수 선언
	node* curr = head->next;
	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	//free함수로 할당한 메모리 공간 해제 (힙영역)
	free(head); free(node1); free(node2);

	return 0;
}
