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
Node *midLL(Node *head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}
	Node *fast = head, *slow = head;
	while (fast->next != NULL && fast->next->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
Node *mergeTwoSortedLists(Node *l1, Node *l2) {
	if (l1 == NULL)return l2;
	if (l2 == NULL)return l1;

	Node *c1 = l1, *c2 = l2;
	Node *dummy = new Node(-1);
	Node *prev = dummy;
	while (c1 != NULL && c2 != NULL) {
		if (c1->data < c2->data) {
			prev->next = c1;
			c1 = c1->next;
		}
		else {
			prev->next = c2;
			c2 = c2->next;
		}
		prev = prev->next;
	}
	if (c1 == NULL) {
		prev->next = c2;
	}
	if (c2 == NULL) {
		prev->next = c1;
	}
	return dummy->next;
}
Node *mergeSort_LL(Node *head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}
	Node *midNode = midLL(head); //Breaked the list into two halves
	Node *newHead = midNode->next;
	midNode->next = NULL;

	Node *l1 = mergeSort_LL(head);
	Node *l2 = mergeSort_LL(newHead);
	return mergeTwoSortedLists(l1, l2);
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head1 = new Node(10);
	Node *node1 = new Node(4);
	Node *node2 = new Node(1);
	Node *node3 = new Node(2);
	Node *node4 = new Node(5);
	head1->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	Node * newNode = mergeSort_LL(head1);
	Display_LL(newNode);
}