#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 97 && s[i] <= 121) {
			s[i] -= 32;
		}
		else {
			s[i] += 32;
		}
	}
	cout << s << endl;
}