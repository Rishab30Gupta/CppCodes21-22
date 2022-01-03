#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int low, high; cin >> low >> high;
	for (int i = low; i <= high; i++) {
		bool flag = true;
		for (int j = 2; (j * j) <= i; j++) {
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag == true) {
			cout << i << endl;
		}
	}
}