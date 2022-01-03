#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	vector<int>vec;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		vec.push_back(x);
	}

	vector<int>newv;
	bool flag = true;
	for (int i = 0; i < vec.size(); i++) {
		int x = vec[i];
		flag = true;
		for (int j = 2; j * j <= x; j++) {
			if (x % j == 0) {
				flag = false;
			}
		}
		if (flag == false) {
			newv.push_back(x);
		}
	}
	for (auto it : newv) {
		cout << it << " ";
	}
}