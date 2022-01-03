#include<bits/stdc++.h>
using namespace std;
int count_digits(int n) {
	int total_digits = 0;
	while (n != 0) {
		n = n / 10;
		total_digits++;
	}
	return total_digits;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, d; cin >> n >> d;
	int total_digits = count_digits(n);
	d = d % total_digits;
	if (d < 0) {
		d = total_digits + d;
	}
	if (d == total_digits) {
		cout << n << endl;
	}
	else {
		int rem = 1;
		for (int i = 0; i < d; i++) {
			rem = rem * 10;
		}
		int first_answer_part = n % rem, remaining_part = 1;
		for (int i = 0; i < (total_digits - d); i++) {
			first_answer_part = first_answer_part * 10;
			remaining_part = remaining_part * 10;
		}
		remaining_part /= 10;
		int temp = n / rem;
		while (temp != 0) {
			int digit = temp / remaining_part;
			digit *= remaining_part;
			first_answer_part = first_answer_part + digit;
			temp = temp % remaining_part;
			remaining_part /= 10;
		}
		cout << first_answer_part << endl;
	}
}