#include<bits/stdc++.h>
using namespace std;
void printSubsequences(string str, string ans) {
	//Base Case
	if (str.size() == 0) {
		cout << ans << endl;
		return;
	}
	char ch = str[0];
	string ros = str.substr(1);
	//pick the element
	printSubsequences(ros, ans + ch);
	printSubsequences(ros, ans + "");
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str; cin >> str;
	printSubsequences(str, "");
}