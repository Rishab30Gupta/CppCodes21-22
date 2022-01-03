#include<bits/stdc++.h>
using namespace std;

void sort01(vector<int>& arr) {
	int i = 0, j = 0;
	while (i < arr.size()) {
		if (arr[i] == 1) {
			i++;
		}
		else {
			swap(arr[i], arr[j]);
			i++;
			j++;
		}
	}
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		arr.push_back(x);
	}
	sort01(arr);
	for (auto it : arr) {
		cout << it << " ";
	}
}