#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	bool flag = true;
	int n; cin >> n;
	for (int i = 2; (i * i) <= n; i++) {
		if (n % i == 0) {
			flag = false;
			break;
		}
	}
	if (flag == true) {
		cout << "prime" << endl;
	}
	else cout << "not prime" << endl;
}