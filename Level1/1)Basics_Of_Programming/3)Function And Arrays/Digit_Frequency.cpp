#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int digit; cin >> digit;
	int temp = n, count = 0;
	while (temp != 0) {
		int r = temp % 10;
		if (r == digit)count++;
		temp /= 10;
	}
	cout << count << endl;
}