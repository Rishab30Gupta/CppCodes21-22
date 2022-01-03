#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == 1 || j == n) {
				cout << "*	";
			}
			else if (i > n / 2 && (i == j || i + j == (n + 1))) {
				cout << "*	";
			}
			else {
				cout << "	";
			}
		}
		cout << endl;
	}
}