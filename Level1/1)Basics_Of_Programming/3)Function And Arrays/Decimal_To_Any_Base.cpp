#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int num, base; cin >> num >> base;
	vector<int>vec;
	int temp = num;
	while (temp != 0) {
		int r = temp % base;
		vec.push_back(r);
		temp = temp / base;
	}

	reverse(vec.begin(), vec.end());
	for (auto it : vec) {
		cout << it;
	}
}