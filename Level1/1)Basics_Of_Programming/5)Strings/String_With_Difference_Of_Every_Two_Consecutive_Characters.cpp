#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	string temp;
	temp += s[0];
	for (int i = 1; i < s.size(); i++) {
		char curr = s[i];
		char prev = s[i - 1];
		int gap = curr - prev;

		temp += to_string(gap);
		temp += curr;
	}
	cout << temp << endl;
}