#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int l = 0, h = n - 1;
	while (l < h) {
		swap(arr[l], arr[h]);
		l++;
		h--;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}