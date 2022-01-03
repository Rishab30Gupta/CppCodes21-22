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
Node *OddEven_LL(Node *head) {
	Node *OddNode = new Node(-1);
	Node *EvenNode = new Node(-1);
	Node *l1 = OddNode, *l2 = EvenNode;
	Node *curr = head;
	while (curr != NULL) {
		Node *forw = curr->next;
		curr->next = NULL;
		if (curr->data % 2 != 0) {
			l1->next = curr;
			l1 = l1->next;
		}
		else {
			l2->next = curr;
			l2 = l2->next;
		}
		curr = forw;
	}
	l1->next = EvenNode->next;
	return OddNode->next;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head = new Node(2);
	Node *node1 = new Node(1);
	Node *node2 = new Node(3);
	Node *node3 = new Node(5);
	Node *node4 = new Node(6);

	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	Node *newNode = OddEven_LL(head);
	Display_LL(newNode);
}