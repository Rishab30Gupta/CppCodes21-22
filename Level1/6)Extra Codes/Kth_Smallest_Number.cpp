#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr, int low, int high, int pivot) {
	int i = 0, j = 0;
	while (i < arr.size()) {
		if (arr[i] <= pivot) {
			swap(arr[i], arr[j]);
			i++;
			j++;
		}
		else {
			i++;
		}
	}
	return j - 1;
}
int kth_smallest(vector<int>& arr, int low, int high, int k) {
	int pivot = arr[high];
	int pivotIndex = partition(arr, low, high, pivot);
	if (pivotIndex == k - 1) {
		return pivot;
	}
	else if (k > pivotIndex) {
		return kth_smallest(arr, pivotIndex + 1, high, k);
	}
	else {
		return kth_smallest(arr, low, pivotIndex - 1, k);
	}
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
	int k; cin >> k;
	int ans = kth_smallest(arr, 0, n - 1, k);
	cout << ans << endl;
}