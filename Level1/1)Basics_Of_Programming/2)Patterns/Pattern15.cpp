#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int spaces = n / 2;
	int stars = 1;
	int val = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= spaces; j++) {
			cout << "	";
		}
		int cval = val;
		for (int j = 1; j <= stars; j++) {
			cout << cval << "	";
			if (j <= stars / 2) {
				cval++;
			}
			else {
				cval--;
			}
		}
		if (i <= n / 2) {
			spaces--;
			stars += 2;
			val++;
		}
		else {
			spaces++;
			stars -= 2;
			val--;
		}
		cout << endl;
	}
}