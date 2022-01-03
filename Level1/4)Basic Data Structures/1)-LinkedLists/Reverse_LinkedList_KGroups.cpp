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
Node *th = NULL, *tt = NULL;
void addFirstNode(Node *head, Node *node) {
	if (th == NULL) {
		th = node;
		tt = node;
	}
	else {
		node->next = th;
		th = node;
	}
}
Node *reverseNodesKGroups(Node *head, int K) {
	if (head == NULL || head->next == NULL || K == 0) {
		return head;
	}
	Node *oh = NULL, *ot = NULL;
	int len = Length_LL(head);
	Node * curr = head;
	while (len >= K) {
		int temp = K;
		while (temp--) {
			Node *forw = curr->next;
			curr->next = NULL;
			addFirstNode(head, curr);
			curr = forw;
		}

		if (oh == NULL) {
			oh = th;
			ot = tt;
		}
		else {
			ot->next = th;
			ot = tt;
		}
		th = NULL;
		th = NULL;
		len = len - K;
	}
	ot->next = curr;
	return oh;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Node *head = new Node(1);
	Node *node1 = new Node(1);
	Node *node2 = new Node(2);
	Node *node3 = new Node(3);
	Node *node4 = new Node(3);
	head->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	Node *newNode = reverseNodesKGroups(head, 2);
	Display_LL(newNode);
}