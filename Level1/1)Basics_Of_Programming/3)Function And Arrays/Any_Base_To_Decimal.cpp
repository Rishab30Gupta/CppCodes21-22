#include<bits/stdc++.h>
using namespace std;
int count_digits(int num) {
	int count = 0;
	while (num != 0) {
		count++;
		num /= 10;
	}
	return count;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int num; cin >> num;
	int base; cin >> base;
	int answer = 0;

	int digits = count_digits(num);
	for (int i = 0; i < digits; i++) {
		int n = num % 10;
		answer = answer + (n * pow(base, i));
		num = num / 10;
	}
	cout << answer << endl;
}