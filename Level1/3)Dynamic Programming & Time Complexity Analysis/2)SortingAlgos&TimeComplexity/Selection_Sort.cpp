#include<bits/stdc++.h>
using namespace std;
vector<int>SelectionSort(vector<int>&arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		int mni_ele_idx = i;
		for (int j = i; j < n; j++) {
			if (arr[j] < arr[mni_ele_idx]) {
				mni_ele_idx = j;
			}
		}
		swap(arr[i], arr[mni_ele_idx]);
	}
	return arr;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<int>arr;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		arr.push_back(x);
	}
	vector<int>sortedarr = SelectionSort(arr, n);
	for (auto it : sortedarr) {
		cout << it << " ";
	}
	cout << endl;
}