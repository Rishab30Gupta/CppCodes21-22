#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n; s
	int count_digits = 0;
	int temp = n;
	while (temp != 0) {
		temp = temp / 10;
		count_digits++;
	}
	cout << count_digits << endl;
}