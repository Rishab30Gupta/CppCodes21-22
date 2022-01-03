#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	while (n > 0) {
		int digit = n % 10;
		n = n / 10;
		cout << digit << endl;
	}
}