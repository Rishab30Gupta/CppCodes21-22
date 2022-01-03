#include<bits/stdc++.h>
using namespace std;
vector<int> mergeTwoSortedArrays(vector<int> &A, vector<int> &B) {
	int i = 0, j = 0;
	vector<int>C;
	while (i < A.size() && j < B.size()) {
		if (A[i] <= B[j]) {
			C.push_back(A[i]);
			i++;
		}
		else {
			C.push_back(B[j]);
			j++;
		}
	}
	while (i < A.size()) {
		C.push_back(A[i]);
		i++;
	}
	while (j < B.size()) {
		C.push_back(B[j]);
		j++;
	}
	return C;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	vector<int>A, B;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		A.push_back(x);
	}
	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		B.push_back(x);
	}
	vector<int>res = mergeTwoSortedArrays(A, B);
	for (auto it : res) {
		cout << it << " ";
	}
}
