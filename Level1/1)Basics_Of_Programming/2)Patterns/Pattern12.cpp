#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;

	int first_number = 0;
	cout << first_number << endl;
	int second_number = 1;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << second_number << "	";
			int temp = second_number;
			second_number = first_number + second_number;
			first_number = temp;
		}
		cout << endl;
	}
}