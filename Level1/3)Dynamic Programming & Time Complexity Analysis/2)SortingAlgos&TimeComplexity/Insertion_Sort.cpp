#include<bits/stdc++.h>
using namespace std;
vector<int>InsertionSort(vector<int>&arr, int n) {
	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
			else break;
		}
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
	vector<int>sortedarr = InsertionSort(arr, n);
	for (auto it : sortedarr) {
		cout << it << " ";
	}
	cout << endl;
}