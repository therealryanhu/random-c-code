/* singly linked list */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;

	struct Node *next;
} Node;

Node *createNode(int n)
{
	Node *newNode = malloc(sizeof(struct Node));
	newNode->data = n;
	newNode->next = NULL;

	return newNode;
}

void insertAtHead(Node **head, int n)
{
	Node *newNode = createNode(n);
	newNode->next = *head;
	*head = newNode;
}

int getNum(Node **head, int index)
{
	int n;

	for (int i = 0; i < index; i++) {
	}

	return n;
}

int main(void)
{
	Node daNode;
	daNode.data = 0;

	return 0;
}
