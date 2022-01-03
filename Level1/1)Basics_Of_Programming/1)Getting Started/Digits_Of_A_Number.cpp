#include<bits/stdc++.h>
using namespace std;

int count_total_digits(int temp) {
	int x = temp, count_digits = 0;
	while (x != 0) {
		x = x / 10;
		count_digits++;
	}
	return count_digits;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	if (n == 0) {
		cout << 0 << endl;
	}
	else {
		int temp = n;
		int divisor = 1;
		int total_digits = count_total_digits(n);
		for (int i = 1; i < total_digits; i++) {
			divisor = divisor * 10;
		}
		while (temp != 0) {
			int digit = temp / divisor;
			cout << digit << endl;
			temp = temp % divisor;
			divisor = divisor / 10;
		}
		while (divisor != 0) {
			cout << 0 << endl;
			divisor /= 10;
		}
	}
}