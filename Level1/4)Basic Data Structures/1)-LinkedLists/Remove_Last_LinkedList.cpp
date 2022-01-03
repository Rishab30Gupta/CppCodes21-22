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
	Node *x = RemoveLast_LL(head);
	Display_LL(x);
}