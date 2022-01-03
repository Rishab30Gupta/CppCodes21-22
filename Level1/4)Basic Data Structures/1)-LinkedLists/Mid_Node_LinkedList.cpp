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
//Using Length function of linkedlist
/*
int Mid_Node_LL(Node *head) {
	if (head == NULL) {
		return -1;
	}
	int length = Length_LL(head);
	Node *temp = head;
	for (int i = 0; i < length / 2; i++) {
		temp = temp->next;
	}
	return temp->data;
}
*/
//Using slow-fast pointer approach
//TC->O(N),SC->O(1)
int Mid_Node_LL(Node *head) {
	if (head == NULL) {
		return -1;
	}
	Node *slow = head, *fast = head;
	while (fast->next != NULL && fast->next->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	if (fast->next == NULL) {
		return slow->data;
	}
	else {
		return slow->next->data;
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
	cout << "Mid node: " << Mid_Node_LL(head) << endl;
}