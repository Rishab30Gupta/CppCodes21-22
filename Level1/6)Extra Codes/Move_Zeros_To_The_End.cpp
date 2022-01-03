#include<bits/stdc++.h>
using namespace std;
void move_zeros_to_end(vector<int>&vec) {
	int i = 0, j = 0;
	while (i < vec.size() and j < vec.size()) {
		if (vec[i] != 0) {
			swap(vec[i], vec[j]);
			i++;
			j++;
		}
		else {
			i++;
		}
	}
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<int>vec;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		vec.push_back(x);
	}
	move_zeros_to_end(vec);
	for (auto it : vec) {
		cout << it << " ";
	}
	cout << endl;
}