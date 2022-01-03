#include<bits/stdc++.h>
using namespace std;
/*
Time complexity -> O(N)
Space complexity -> O(N)
*/
int give_value(pair<int, int>pr) {
	return pr.first;
}
int give_index(pair<int, int>pr) {
	return pr.second;
}
vector<int>stock_span(vector<int>&arr) {
	vector<int>span(arr.size());
	stack<pair<int, int>> st;
	st.push({arr[0], 0});
	span[0] = 1;
	for (int i = 1; i < arr.size(); i++) {
		while (st.size() > 0 && arr[i] > give_value(st.top())) {
			st.pop();
		}
		if (st.size() == 0) {
			span[i] = i + 1;
		}
		else {
			span[i] = i - give_index(st.top());
		}
		st.push({arr[i], i});
	}
	return span;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<int>arr;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		arr.push_back(x);
	}
	vector<int>farr = stock_span(arr);
	for (auto i : farr) {
		cout << i << " ";
	}
	cout << endl;
}