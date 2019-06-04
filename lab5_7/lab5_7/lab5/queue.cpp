#include <iostream>
#include "queue.h"
using namespace std;

struct Node {
	int data;
	struct Node* next;
};
struct Node* head = NULL;
void insert(int new_data) {
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
}
void display() {
	struct Node* ptr;
	ptr = head;
	while (ptr != NULL) {
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}

Queue::Queue(int count)
{
	for (int i = 0; i < count; i++)
	{
		insert(0);
	}
}

Queue::Queue(const Queue& other)
{
	count = other.count;
	for (int i = 0; i < count; i++) {
		Push(other.Pop());
	}
}

Queue::~Queue()
{
	while (GetSize() > 0) {
		Pop();
	}
	delete head;
}


void Queue::Push(int element)
{
	insert(element);
}

int Queue::Peek()
{
	if (head == NULL) {
		return 0;
	}
	return head->data;
}

int Queue::Pop() const
{
	if (head == NULL) {
		return 0;
	}

	Node* n = head;
	int value = n->data;
	head = n->next;
	delete n;
	return value;
}

int Queue::GetSize() const
{
	int count = 0;
	struct Node* n = head;
	if (n == NULL) return 0;

	while (n->next != NULL) {
		++count;
		n = n->next;
	}
	return count;
}
