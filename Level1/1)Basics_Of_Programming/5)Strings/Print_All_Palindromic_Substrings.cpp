#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string temp) {
	int l = 0, h = temp.size() - 1;
	while (l < h) {
		if (temp[l] != temp[h]) {
			return false;
		}
		l++;
		h--;
	}
	return true;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		for (int j = i; j < s.size(); j++) {
			string temp = s.substr(i, j - i + 1);
			if (isPalindrome(temp) == true) {
				cout << temp << endl;
			}
		}
	}
}