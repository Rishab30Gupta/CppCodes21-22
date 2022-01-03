#include<bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node *next;
	Node() {
		next = NULL;
	}
	Node(int data) {
		this->data = data;
		next = NULL;
	}
};
void Display_LL(Node *head) {
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
int Length_LL(Node *head) {
	int count = 0;
	Node *temp = head;
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}
Node *getNodeAt(Node *head, int pos) {
	Node *temp = head;
	for (int i = 0; i < pos; i++) {
		temp = temp->next;
	}
	return temp;
}
Node *Reverse_LL_PI(Node *head) {
	if (head == NULL) {
		return NULL;
	}
	Node *prev = NULL;
	Node *curr = head;
	while (curr != NULL) {
		Node *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head = new Node(1);
	Node *node1 = new Node(2);
	Node *node2 = new Node(3);
	Node *node3 = new Node(4);
	Node *node4 = new Node(5);
	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	Node *newNode = Reverse_LL_PI(head);
	Display_LL(newNode);
}