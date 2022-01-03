#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr1[n];
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	int m; cin >> m;
	int arr2[m];
	for (int i = 0; i < m; i++) {
		cin >> arr2[i];
	}
	int size = max(n, m);
	int farr[size];
	int carry = 0;

	if (n >= m) {
		int newarr[n];
		int difference_in_size = n - m, j = 0;
		for (int i = 0; i < difference_in_size; i++) {
			newarr[i] = 0;
		}
		for (int i = difference_in_size; i < n; i++) {
			newarr[i] = arr2[j];
			j++;
		}
		for (int i = size - 1; i >= 0; i--) {
			int sum = 0;
			sum = sum + carry;
			sum += arr1[i];
			sum += newarr[i];
			carry = sum / 10;
			sum = sum % 10;
			farr[i] = sum;
		}
	}
	else {
		int newarr[m];
		int difference_in_size = m - n, j = 0;
		for (int i = 0; i < difference_in_size; i++) {
			newarr[i] = 0;
		}
		for (int i = difference_in_size; i < m; i++) {
			newarr[i] = arr1[j];
			j++;
		}
		for (int i = size - 1; i >= 0; i--) {
			int sum = 0;
			sum = sum + carry;
			sum += arr2[i];
			sum += newarr[i];
			carry = sum / 10;
			sum = sum % 10;
			farr[i] = sum;
		}
	}
	for (int i = 0; i < max(n, m); i++) {
		cout << farr[i] << endl;
	}
}