#include<bits/stdc++.h>
using namespace std;
void print_array(vector<int>& arr) {
	for (auto ele : arr) {
		cout << ele << " ";
	}
}
void count_sort(vector<int> &arr, int max, int min) {
	int size_range = max - min + 1;
	vector<int>freq(size_range, 0);
	vector<int>fans(arr.size(), 0);
	for (int i = 0; i < arr.size(); i++) {
		int val = arr[i];
		freq[val - min]++;
	}
	for (int i = 1; i < freq.size(); i++) {
		freq[i] += freq[i - 1];
	}
	for (int i = arr.size() - 1; i >= 0; i--) {
		int val2 = arr[i];
		int pos = freq[val2 - min];
		fans[pos - 1] = val2;
		freq[val2 - min]--;
	}
	for (int i = 0; i < arr.size(); i++) {
		arr[i] = fans[i];
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
	int maxi = INT_MIN;
	int mini = INT_MAX;

	for (int i = 0; i < n; i++) {
		mini = min(mini, arr[i]);
		maxi = max(maxi, arr[i]);
	}
	count_sort(arr, maxi, mini);
	print_array(arr);
}