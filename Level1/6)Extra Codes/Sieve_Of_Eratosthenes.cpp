#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<bool>seive(n + 1, false);
	for (int i = 2; (i * i) < n; i++) {
		if (seive[i] == false) {
			for (int j = i; (i * j) < n; j++) {
				seive[i * j] = true;
			}
		}
	}
	for (int i = 2; i < n; i++) {
		if (seive[i] == false) {
			cout << i << " ";
		}
	}
}