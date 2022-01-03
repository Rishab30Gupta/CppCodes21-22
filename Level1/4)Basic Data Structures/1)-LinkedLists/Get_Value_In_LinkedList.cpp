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
Node *get_First_LL(Node *head) {
	if (Length_LL(head) == 0) {
		return NULL;
	}
	else {
		return head;
	}
}
Node *get_Last_LL(Node *head) {
	if (Length_LL(head) == 0) {
		return NULL;
	}
	else {
		Node *temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		return temp;
	}
}
Node *get_At_LL(Node *head, int index) {
	if (Length_LL(head) <= 0 || index >= Length_LL(head)) {
		cout << "Out of bound/Invalid index" << endl;
		return NULL;
	}
	else if (index == 0) {
		return get_First_LL(head);
	}
	else if (index == Length_LL(head) - 1) {
		return get_Last_LL(head);
	}
	else {
		Node *temp = head;
		for (int i = 0; i < index; i++) {
			temp = temp->next;
		}
		return temp;
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
	Display_LL(head);
	Node *x = get_First_LL(head);
	Node *y = get_Last_LL(head);
	cout << "Value at first index: " << x->data << endl;
	cout << "Value at last index: " << y->data << endl;

	Node *z = get_At_LL(head, 2);
	if (z != NULL) {
		cout << "Value at given index: " << z->data << endl;
	}
}