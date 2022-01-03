#include<bits/stdc++.h>
using namespace std;
bool check(stack<char>&st, char ch) {
	if (st.size() == 0) {
		return false;
	}
	else if (st.top() != ch) {
		return false;
	}
	else {
		st.pop();
		return true;
	}
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str; cin >> str;
	stack<char>st;
	bool ans = true;
	for (int i = 0; i < str.size(); i++) {
		char ch = str[i];
		if (ch == '(' || ch == '{' || ch == '[') {
			st.push(ch);
		}
		else if (ch == ')') {
			ans = check(st, '(');
			if (ans == false) {
				cout << "false" << endl;
				return 0;
			}
		}
		else if (ch == '}') {
			ans = check(st, '{');
			if (ans == false) {
				cout << "false" << endl;
				return 0;
			}
		}
		else if (ch == ']') {
			ans = check(st, '[');
			if (ans == false) {
				cout << "false" << endl;
				return 0;
			}
		}
	}
	if (st.size() == 0) {
		cout << "true" << endl;
	}
	else cout << "false" << endl;
}