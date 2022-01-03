#include<bits/stdc++.h>
using namespace std;
void printEncoding(string str, string ans) {
	//BaseCase
	if (str.size() == 0) {
		cout << ans << endl;
		return;
	}
	else if (str.size() == 1) {
		char ch = str[0];
		if (ch == '0') {
			return;
		}
		else {
			int chv = ch - '0';
			char code = char('a' + chv - 1);
			ans = ans + code;
			cout << ans << endl;
		}
	}
	else {
		char ch = str[0];
		string ros = str.substr(1);
		if (ch == '0') {
			return;
		}
		else {
			int chv = ch - '0';
			char code = char('a' + chv - 1);
			printEncoding(ros, ans + code);
		}
		string ch12 = str.substr(0, 2);
		string ros12 = str.substr(2);
		int ch12v = stoi(ch12);
		if (ch12v <= 26) {
			char code = char('a' + ch12v - 1);
			printEncoding(ros12, ans + code);
		}
	}
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str; cin >> str;
	printEncoding(str, "");
}