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
//Time complexity->O(N),Space complexity->O(1)
Node *AddTwo_LL(Node *head1, Node *head2) {
	Node *dummy = new Node();
	Node *temp = dummy;
	int carry = 0;
	while (head1 != NULL || head2 != NULL || carry != 0) {
		int sum = 0;
		if (head1 != NULL) {
			sum = sum + head1->data;
			head1 = head1->next;
		}
		if (head2 != NULL) {
			sum = sum + head2->data;
			head2 = head2->next;
		}
		sum = sum + carry;
		carry = sum / 10;
		Node *newNode = new Node(sum % 10);
		temp->next = newNode;
		temp = temp->next;
	}
	return dummy->next;
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

	Node *head2 = new Node(5);
	Node *node5 = new Node(6);
	Node *node6 = new Node(1);
	head2->next = node5;
	node5->next = node6;
	node6->next = node2;
	Node *newNode = AddTwo_LL(head1, head2);
	Display_LL(newNode);
}