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
	int mxi_ele = INT_MIN, min_ele = INT_MAX;
	for (int i = 0; i < n; i++) {
		mxi_ele = max(mxi_ele, arr[i]);
		min_ele = min(min_ele, arr[i]);
	}
	cout << mxi_ele - min_ele << endl;
}