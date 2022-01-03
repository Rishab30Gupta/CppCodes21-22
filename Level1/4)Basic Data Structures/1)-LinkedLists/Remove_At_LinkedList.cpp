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
Node *RemoveFirst_LL(Node *head) {
	if (head == NULL) {
		cout << "LinkedList is empty" << endl;
		return NULL;
	}
	else {
		head = head->next;
		return head;
	}
}
Node *RemoveLast_LL(Node *head) {
	if (head == NULL) {
		cout << "LinkedList is empty" << endl;
		return NULL;
	}
	else if (head->next == NULL) {
		delete(head);
		return NULL;
	}
	else {
		Node *temp = head;
		while (temp->next->next != NULL) {
			temp = temp->next;
		}
		temp->next = NULL;
		return head;
	}
}
Node *RemoveAt_LL(Node * head, int index) {
	if (index == 0) {
		return RemoveFirst_LL(head);
	}
	else if (index == Length_LL(head) - 1) {
		return RemoveLast_LL(head);
	}
	else if (index < 0 || index >= Length_LL(head)) {
		cout << "Invalid index" << endl;
		return head;
	}
	else {
		Node *temp = head;
		for (int i = 0; i < index - 1; i++) {
			temp = temp->next;
		}
		temp->next = temp->next->next;
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
	Node *x = RemoveAt_LL(head, 2);
	Display_LL(x);
}