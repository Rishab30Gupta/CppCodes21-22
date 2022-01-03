#include<bits/stdc++.h>
using namespace std;
int check_duplicate(int arr[], int n) {
	sort(arr, arr + n);
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			return arr[i];
		}
	}
	return -1;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n ; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << check_duplicate(arr, n);
}