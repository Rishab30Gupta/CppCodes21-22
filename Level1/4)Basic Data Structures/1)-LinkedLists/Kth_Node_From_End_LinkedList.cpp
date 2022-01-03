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
//Using Length function of Linkedlist
/*
int kth_Node_From_Last_LL(Node *head, int k) {
	//kth node from last == (Lenght(LL)-k+1)th node from the beginning
	int index = Length_LL(head) - k + 1;
	if (index <= 0 || index > Length_LL(head)) {
		return -1;
	}
	else if (index == 1) {
		return head->data;
	}
	else {
		Node *temp = head;
		for (int i = 0; i < index - 1; i++) {
			temp = temp->next;
		}
		return temp->data;
	}
}
*/
//Using Tortoise method
//TC->O(N),SC->O(1)
int kth_Node_From_Last_LL(Node *head, int k) {
	if (head == NULL) {
		return -1;
	}
	Node *slow = head, *fast = head;
	while (k--) {
		if (fast == NULL)return -1;
		fast = fast->next;
	}
	while (fast != NULL) {
		slow = slow->next;
		fast = fast->next;
	}
	return slow->data;
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
	cout << kth_Node_From_Last_LL(head, 4) << endl;
}