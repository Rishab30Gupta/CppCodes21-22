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
	int mxi_ele = *max_element(arr, arr + n);
	while (mxi_ele > 0) {
		for (int i = 0; i < n; i++) {
			if (arr[i] < mxi_ele) {
				cout << "	";
			}
			else {
				cout << "*	";
				arr[i]--;
			}
		}
		mxi_ele--;
		cout << endl;
	}
}