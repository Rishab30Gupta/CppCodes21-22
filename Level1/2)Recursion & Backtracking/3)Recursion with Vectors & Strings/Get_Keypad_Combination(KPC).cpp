#include<bits/stdc++.h>
using namespace std;
string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
vector<string>getKpc(string str) {
	//base case
	if (str.size() == 0) {
		vector<string>bres;
		bres.push_back("");
		return bres;
	}
	char ch = str[0];  //6
	string ros = str.substr(1); //7
	vector<string>res = getKpc(ros);  //[t, u]
	vector<string>mres;
	int id = ch - '0';  //6
	string code = codes[id];  //pqrs
	for (int i = 0; i < code.size(); i++) {
		char chCode = code[i];
		for (string it : res) {
			mres.push_back(chCode + it); //[pt,pu,qt,qu,rt,ru,st,su]
		}
	}
	return mres;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s; cin >> s;
	vector<string> ans = getKpc(s);
	int cnt = 0;
	cout << "[";
	for (string str : ans) {
		if (cnt != ans.size() - 1) {
			cout << str << ", ";
			cnt++;
		}
		else {
			cout << str << "]";
		}
	}
}