#include<bits/stdc++.h>
using namespace std;
void print_array(vector<int>&arr) {
	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;
}
int partition(vector<int>&arr, int low, int high, int pivot) {
	int i = 0, j = 0;
	while (i <= high) {
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
void quickSort(vector<int>&arr, int low, int high) {
	if (low > high)return;
	int pivot = arr[high];
	int pivotIndex = partition(arr, low, high, pivot);
	quickSort(arr, low, pivotIndex - 1);
	quickSort(arr, pivotIndex + 1, high);
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
	quickSort(arr, 0, n - 1);
	print_array(arr);
	return 0;
}