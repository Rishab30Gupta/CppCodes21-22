#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int first_number = 0;
	int second_number = 1;
	for (int i = 1; i <= n; i++) {
		cout << first_number << endl;
		int curr_first_number = first_number;
		first_number = second_number;
		second_number = second_number + curr_first_number;
	}
}