#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;

	int stars = n;
	int spaces = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= spaces; j++) {
			cout << "	";
		}
		for (int j = 1; j <= stars; j++) {
			if (i > 1 && i <= n / 2) {
				if (j != 1 && j != stars) {
					cout << "	";
				}
				else {
					cout << "*	";
				}
			}
			else {
				cout << "*	";
			}
		}
		if (i <= n / 2) {
			stars -= 2;
			spaces++;
		}
		else {
			stars += 2;
			spaces--;
		}
		cout << endl;
	}
}