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
//Time complexity->0(N),Space complexity->O(1)
/*
Node *getIntersectionNode(Node *head1, Node *head2) {
	if (head1 == NULL || head2 == NULL)return NULL;
	int len1 = Length_LL(head1);
	int len2 = Length_LL(head2);

	Node *c1 = head1, *c2 = head2;
	if (len1 > len2) {
		int diff = len1 - len2;
		while (diff--) {
			c1 = c1->next;
		}
	}
	else {
		int diff = len2 - len1;
		while (diff--) {
			c2 = c2->next;
		}
	}
	while (c1 != NULL && c2 != NULL) {
		if (c1 == c2) {
			return c1;
		}
		c1 = c1->next;
		c2 = c2->next;
	}
	return NULL;
}
*/
//Time complexity->0(N),Space complexity->O(1)
Node *getIntersectionNode(Node *head1, Node *head2) {
	if (head1 == NULL || head2 == NULL)return NULL;
	Node *c1 = head1, *c2 = head2;
	while (c1 != c2) {
		if (c1 == NULL) {
			c1 = head2;
		}
		else {
			c1 = c1->next;
		}
		if (c2 == NULL) {
			c2 = head1;
		}
		else {
			c2 = c2->next;
		}
	}
	return c1;
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
	Node *newNode = getIntersectionNode(head1, head2);
	cout << newNode->data << endl;
}