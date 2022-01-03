#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int spaces = 2 * n - 3;
	int stars = 1;


	for (int i = 1; i <= n; i++) {
		int val = 1;
		for (int j = 1; j <= stars; j++) {
			cout << val << "	";
			val++;
		}
		val--;
		for (int j = 1; j <= spaces; j++) {
			cout << "	";
		}
		if (i == n) {  //last row
			stars--;
			val--;
		}
		for (int j = 1; j <= stars; j++) {
			cout << val << "	";
			val--;
		}
		stars++;
		spaces -= 2;
		cout << endl;
	}
}