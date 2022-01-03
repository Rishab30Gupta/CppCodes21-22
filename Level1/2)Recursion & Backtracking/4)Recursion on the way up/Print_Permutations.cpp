#include<bits/stdc++.h>
using namespace std;
void printPermutations(string str, string ans) {
	//BaseCase
	if (str.size() == 0) {
		cout << ans << endl;
		return;
	}
	for (int i = 0; i < str.size(); i++) {
		char ch = str[i]; // a, b, c
		string qLeftPart = str.substr(0, i);
		string qRightPart = str.substr(i + 1);
		string rstr = qLeftPart + qRightPart;
		printPermutations(rstr, ans + ch);
	}
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str; cin >> str;
	printPermutations(str, "");
}