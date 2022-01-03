#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int j = 0;
		for (j = n; j > i; j--) {
			cout << "	";
		}
		for (; j >= 1; j--) {
			cout << "*	";
		}
		cout << endl;
	}
	cout << endl;
}