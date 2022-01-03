#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int outerspace = n / 2;
	int innerspace = -1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= outerspace; j++) {
			cout << "	";
		}
		cout << "*	";
		for (int j = 1; j <= innerspace; j++) {
			cout << "	";
		}
		if (i > 1 && i < n) {
			cout << "*	";
		}
		if (i <= n / 2) {
			outerspace--;
			innerspace += 2;
		}
		else {
			outerspace++;
			innerspace -= 2;
		}
		cout << endl;
	}
}