#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	vector<vector< int>>arr(n);
	for (int i = 0; i < n; i++) {
		arr[i].resize(i + 1);
		arr[i][0] = arr[i][i] = 1;
		for (int j = 1; j < i; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++) {
			cout << arr[i][j] << "	";
		}
		cout << endl;
	}
}