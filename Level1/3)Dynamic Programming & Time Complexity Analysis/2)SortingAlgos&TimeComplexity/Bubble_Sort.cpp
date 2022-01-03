
#include<bits/stdc++.h>
using namespace std;
vector<int> BubbleSort(vector<int> &arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j <= n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
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
	vector<int>sortedarr = BubbleSort(arr, n);
	for (auto it : sortedarr) {
		cout << it << " ";
	}
	cout << endl;
}