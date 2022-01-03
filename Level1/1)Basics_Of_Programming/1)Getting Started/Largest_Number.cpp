#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		long long arr[n], suffix_max[100005];
		memset(suffix_max, 0, sizeof(suffix_max));
		for (long long i = 0; i < n; i++) {
			cin >> arr[i];
		}

		//precomputing suffix max
		for (long long i = n - 1; i >= 0; i--) {
			suffix_max[i] = max(arr[i], suffix_max[i + 1]);
		}
		/*
		for (long long i = 0; i <= n; i++) {
			cout << suffix_max[i] << " ";
		}
		*/
		long long ele_changed = 0, ele_changed_from = 0;
		for (long long i = 0; i < n; i++) {
			if (suffix_max[i] != arr[i]) {
				ele_changed = arr[i];
				ele_changed_from = suffix_max[i];
				arr[i] = suffix_max[i];
				break;
			}
		}
		for (long long i = n - 1; i >= 0; i--) {
			if (arr[i] == ele_changed_from) {
				arr[i] = ele_changed;
				break;
			}
		}
		for (long long i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}