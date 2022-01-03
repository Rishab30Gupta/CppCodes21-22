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
}