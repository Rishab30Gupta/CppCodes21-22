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
	if (head == NULL)return NULL;
	Node *slow = head, *fast = head;
	while (fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}
Node *Reverse_LL(Node *head) {
	if (head == NULL || head->next == NULL)return head;
	Node *prev = NULL;
	Node *curr = head;
	while (curr != NULL) {
		Node *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

//Time complexity->O(N),Space complexity->O(1)
bool is_Palindrome_LL(Node *head) {
	if (head == NULL || head->next == NULL)return false;
	Node *midNode = midLL(head);
	Node *newNode = Reverse_LL(midNode);
	Node *c1 = head;
	while (newNode != NULL) {
		if (c1->data != newNode->data) {
			return false;
		}
		c1 = c1->next;
		newNode = newNode->next;
	}
	return true;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head =  new Node(1);
	Node *node1 = new Node(2);
	Node *node2 = new Node(3);
	Node *node3 = new Node(2);
	Node *node4 = new Node(1);

	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	bool ans = is_Palindrome_LL(head);
	cout << ans << endl;
}