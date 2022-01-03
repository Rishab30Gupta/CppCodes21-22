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
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= spaces; j++) {
			cout << "	";
		}
		for (int j = 1; j <= stars; j++) {
			cout << "*	";
		}
		if (i <= n / 2) {
			spaces--;
			stars += 2;
		}
		else {
			spaces++;
			stars -= 2;
		}
		cout << endl;
	}
}