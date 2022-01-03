#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout << "	";
		}
		for (int j = 1; j <= n - i + 1; j++) {
			cout << "*	";
		}
		cout << endl;
	}
}