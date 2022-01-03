#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string str; cin >> str;
	stack<char>st;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != ')') {
			st.push(str[i]);
		}
		else if (str[i] == ')') {
			if (st.top() == '(') {
				cout << "true" << endl;
				return 0;
			}
			else {
				while (st.top() != '(') {
					st.pop();
				}
			}
			st.pop();
		}
	}
	cout << "false" << endl;
}