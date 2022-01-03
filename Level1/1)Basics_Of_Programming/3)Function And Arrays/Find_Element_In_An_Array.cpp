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
	int target; cin >> target;
	int idx = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == target) {
			idx = i;
		}
	}
	cout << idx << endl;
}