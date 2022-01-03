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
	int base1, base2; cin >> base1 >> base2;

	//first convert it into the decimal form

	int answer = 0;

	int digits = count_digits(num);
	for (int i = 0; i < digits; i++) {
		int n = num % 10;
		answer = answer + (n * pow(base1, i));
		num = num / 10;
	}
	//Now convert this in given base
	vector<int>r;
	while (answer != 0) {
		int rem = answer % base2;
		r.push_back(rem);
		answer = answer / base2;
	}
	reverse(r.begin(), r.end());
	for (auto it : r) {
		cout << it;
	}
}