#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int spaces = 1, stars = n / 2 + 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= stars; j++) {
			cout << "*	";
		}
		for (int j = 1; j <= spaces; j++) {
			cout << "	";
		}
		for (int j = 1; j <= stars; j++) {
			cout << "*	";
		}
		if (i <= n / 2) {
			stars--;
			spaces += 2;
		}
		if (i > n / 2) {
			stars++;
			spaces -= 2;
		}
		cout << endl;
	}
}