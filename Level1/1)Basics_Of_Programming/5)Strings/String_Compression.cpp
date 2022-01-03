#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s; cin >> s;
	vector<int>freq(26, 0);
	string temp1;
	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] != s[i + 1]) {
			temp1 += s[i];
		}
	}
	if (temp1[temp1.size() - 1] != s[s.size() - 1]) {
		temp1 += s[s.size() - 1];
	}
	cout << temp1 << endl;

	string temp2;
	int count = 1;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			count++;
		}
		else {
			temp2 += s[i - 1];
			if (count > 1) {
				temp2 += to_string(count);
			}
			count = 1;
		}
	}
	temp2 += s[s.size() - 1];
	if (count > 1) {
		temp2 += to_string(count);
	}
	cout << temp2 << endl;
}