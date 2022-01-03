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
Node *AddFirst_LL(Node *head, int data) {
	Node *newNode = new Node(data);
	if (head == NULL) {
		head = newNode;
	}
	else {
		newNode->next = head;
		head = newNode;
	}
	return head;
}
Node *AddLast_LL(Node *head, int val) {
	Node *newNode = new Node(val);
	if (Length_LL(head) == 0) {
		head = newNode;
	}
	else {
		Node *temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return head;
}
Node *AddAt_LL(Node *head, int index, int data) {
	if (index < 0 || index > Length_LL(head)) {
		cout << "Index invalid";
		return NULL;
	}
	else if (index == 0) {
		return AddFirst_LL(head, data);
	}
	else if (index == Length_LL(head) - 1) {
		return AddLast_LL(head, data);
	}
	else {
		Node *temp = head;
		for (int i = 0; i < index - 1; i++) {
			temp = temp->next;
		}
		Node *newNode = new Node(data);
		newNode->next = temp->next;
		temp->next = newNode;
		return head;
	}
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
	Node *x = AddAt_LL(head, 5, 50);
	Display_LL(x);
}