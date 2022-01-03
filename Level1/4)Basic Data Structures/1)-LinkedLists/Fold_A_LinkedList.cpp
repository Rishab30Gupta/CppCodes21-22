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
Node *fold_LL(Node *head) {

}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head1 = new Node(4);
	Node *node1 = new Node(1);
	Node *node2 = new Node(8);
	Node *node3 = new Node(4);
	Node *node4 = new Node(5);

	head1->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;

	Node *newNode = fold_LL(head);
}