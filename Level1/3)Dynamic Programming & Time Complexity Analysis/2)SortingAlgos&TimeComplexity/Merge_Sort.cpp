#include<bits/stdc++.h>
using namespace std;
//Time Complexity-> O(Nlog(N))
//Space Complexity-> O(N)
vector<int> mergeTwoSortedArrays(vector<int>A, vector<int>B) {
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
vector<int> merge_sort(vector<int> arr, int low, int high) {
	if (low == high) {
		vector<int>base;
		base.push_back(arr[low]);
		return base;
	}
	int mid = (low + high) / 2;
	vector<int> firstPartSort = merge_sort(arr, low, mid);
	vector<int> SecondPartSort = merge_sort(arr, mid + 1, high);
	vector<int> fullSortedArray = mergeTwoSortedArrays(firstPartSort, SecondPartSort);
	return fullSortedArray;
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
	vector<int>fv = merge_sort(arr, 0, n - 1);
	for (auto it : fv) {
		cout << it << " ";
	}
}