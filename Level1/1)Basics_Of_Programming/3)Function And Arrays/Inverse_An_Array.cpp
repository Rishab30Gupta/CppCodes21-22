#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)cin >> arr[i];

	int farr[n];
	for (int i = 0; i < n; i++) {
		farr[arr[i]] = i;
	}
	for (int i = 0; i < n; i++) {
		cout << farr[i] << endl;
	}
}