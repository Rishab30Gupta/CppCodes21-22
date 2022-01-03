#include<bits/stdc++.h>
using namespace std;
int count_digits(int n) {
	int count = 0;
	while (n--) {
		n /= 10;
		count++;
	}
	return count;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr1[n];
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	int m; cin >> m;
	int arr2[m];
	for (int i = 0; i < m; i++) {
		cin >> arr2[i];
	}
	int num1 = 0;
	for (int i = 0; i < n; i++) {
		int r = arr1[i];
		num1 = (num1 * 10) + r;
	}
	int num2 = 0;
	for (int i = 0; i < m; i++) {
		int r = arr2[i];
		num2 = (num2 * 10) + r;
	}
	int diff = num2 - num1;
	int digits = count_digits(diff);
	int div = 1;
	for (int i = 0; i < digits - 1; i++) {
		div = div * 10;
	}
	while (diff != 0) {
		cout << diff / div << endl;
		diff = diff % div;
		div /= 10;
	}
}