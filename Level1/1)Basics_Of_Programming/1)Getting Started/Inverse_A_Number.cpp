#include<bits/stdc++.h>
using namespace std;
int func(int r, int count) {
	for (int i = 1; i < r; i++) {
		count = count * 10;
	}
	return count;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int temp = n, count = 0, our_number = 0;
	while (temp != 0) {
		int r = temp % 10;  //fetched the last digit
		count++;
		int number_created = func(r, count);
		our_number += number_created;
		temp /= 10;
	}
	cout << our_number << endl;
}