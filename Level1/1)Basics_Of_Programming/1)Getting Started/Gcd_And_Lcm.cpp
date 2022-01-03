#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x, y; cin >> x >> y;
	int gcd = 1;
	for (int i = 1; i <= min(x, y); i++) {
		if (x % i == 0 && y % i == 0) {
			gcd = i;
		}
	}

	//lcm*gcd=x*y
	int lcm = (x * y) / gcd;
	cout << gcd << endl << lcm << endl;
}