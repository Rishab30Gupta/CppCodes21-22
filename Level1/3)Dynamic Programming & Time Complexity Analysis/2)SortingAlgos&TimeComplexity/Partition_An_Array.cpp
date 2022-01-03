#include<bits/stdc++.h>
using namespace std;
void partition_array(vector<int>& arr, int pivot) {
	int i = 0, j = 0;
	while (i < arr.size()) {
		if (arr[i] <= pivot) {
			swap(arr[i], arr[j]);
			i++;
			j++;
		}
		else i++;
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
	int pivot; cin >> pivot;
	partition_array(arr, pivot);
	for (auto it : arr) {
		cout << it << " ";
	}
}