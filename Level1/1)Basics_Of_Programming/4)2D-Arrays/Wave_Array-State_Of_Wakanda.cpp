#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m; cin >> n >> m;
	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int j = 0; j < m; j++) {
		if (j % 2 == 0) {
			for (int i = 0; i < n; i++) {
				cout << arr[i][j] << endl;
			}
		}
		else {
			for (int i = n - 1; i >= 0; i--) {
				cout << arr[i][j] << endl;
			}
		}
	}
}