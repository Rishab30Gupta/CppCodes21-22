#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int l, int h) {
	while (l <= h) {
		swap(arr[l], arr[h]);
		l++;
		h--;
	}
}
void rotate(int arr[], int n, int r) {
	reverse(arr, n - r, n - 1);
	reverse(arr, 0, n - r - 1);
	reverse(arr, 0, n - 1);
}
void display(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)cin >> arr[i];
	int r; cin >> r;
	r = r % n;
	if (r < 0) {
		r = r + n;
	}
	rotate(arr, n, r);
	display(arr, n);
}