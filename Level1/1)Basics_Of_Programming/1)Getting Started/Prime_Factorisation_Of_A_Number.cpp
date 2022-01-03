#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int num; cin >> num;
	for (int i = 2; i <= num; i++) {
		if (num % i == 0) {
			while ((num != 0) && (num % i == 0)) {
				cout << i << " ";
				num = num / i;
			}
		}
	}
}