#include<bits/stdc++.h>
using namespace std;
/*
Time complexity -> O(N)
Space complexity -> O(N)
*/
vector<int>next_greater_element_on_right(vector<int>&arr) {
	vector<int>nge(arr.size());
	stack<int>st;
	st.push(arr[arr.size() - 1]);  //last element of array pushed
	nge[arr.size() - 1] = -1; //last element ka next greater -1 daal deya
	for (int i = arr.size() - 2; i >= 0; i--) {
		while (st.size() > 0 && arr[i] >= st.top()) {
			st.pop();
		}
		if (st.size() == 0) {
			nge[i] = -1;
		}
		else {
			nge[i] = st.top();
		}
		st.push(arr[i]);
	}
	return nge;
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
	vector<int>farr = next_greater_element_on_right(arr);
	for (auto i : farr) {
		cout << i << " ";
	}
	cout << endl;
}