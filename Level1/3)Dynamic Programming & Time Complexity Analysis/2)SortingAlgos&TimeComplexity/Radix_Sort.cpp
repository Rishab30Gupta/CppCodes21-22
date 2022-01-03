#include<bits/stdc++.h>
using namespace std;
void print_array(vector<int>&arr) {
	for (auto it : arr) {
		cout << it << " ";
	}
	cout << endl;
}
void count_sort(vector<int> &arr, int d) {
	vector<int> freq(10, 0);
	vector<int> fans(arr.size(), 0);
	for (int i = 0; i < arr.size(); i++) {
		int val = (arr[i] / d) % 10;
		freq[val]++;
	}
	for (int i = 1; i < freq.size(); i++) {
		freq[i] += freq[i - 1];
	}
	for (int i = arr.size() - 1; i >= 0; i--) {
		int val = (arr[i] / d) % 10;
		int pos = freq[val];
		fans[pos - 1] = arr[i];
		freq[val]--;
	}
	for (int i = 0; i < arr.size(); i++) {
		arr[i] = fans[i];
	}
}

void radixSort(vector<int> &arr) {
	// write your code here
	int maxi = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] > maxi) {
			maxi = arr[i];
		}
	}
	int place = 1;
	while ((maxi / place) > 0) {
		count_sort(arr, place);
		place = place * 10;
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
	radixSort(arr);
	print_array(arr);
}