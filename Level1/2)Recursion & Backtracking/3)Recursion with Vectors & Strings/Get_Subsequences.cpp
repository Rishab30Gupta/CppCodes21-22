#include<bits/stdc++.h>
using namespace std;
//Expectation=> gss(abc)=[...,..c,.b.,.bc,a..,a.c,ab.,abc]
//Faith=> gss(bc)=[..,.c,b.,bc]
//EMF=>gss(abc)= .+gss(bc) + a+gss(bc)
vector<string>getSubsequence(string str) {
	if (str.size() == 0) {
		vector<string>bres;
		bres.push_back("");
		return bres;
	}
	char ch = str[0]; //abc->a
	string ros = str.substr(1); //abc->bc
	vector<string>rres = getSubsequence(ros); //getSubsequence(bc)->[..,.c,b.,bc]
	vector<string>mres;
	for (string it : rres) {  //no addition
		mres.push_back(it);
	}
	for (string it : rres) {  //added the first character
		mres.push_back(ch + it);
	}
	return mres;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str; cin >> str;
	vector<string>ans = getSubsequence(str);
	for (auto it : ans) {
		cout << it << endl;
	}
}