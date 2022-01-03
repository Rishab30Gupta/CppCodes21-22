#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	for (int i = 1; i <= 10; i++) {
		cout << n << " * " << i << " = " << n*i << endl;
	}
	cout << endl;
}