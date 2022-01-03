#include<bits/stdc++.h>
using namespace std;
string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKeyPadCombinations(string str, string ans) {
	//Base case
	if (str.size() == 0) {
		cout << ans << endl;
		return;
	}
	char ch = str[0];
	string ros = str.substr(1);
	string chCode = codes[ch - '0'];
	for (int i = 0; i < chCode.size(); i++) {
		char choice = chCode[i];
		printKeyPadCombinations(ros, ans + choice);
	}
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str; cin >> str;
	printKeyPadCombinations(str, "");
}