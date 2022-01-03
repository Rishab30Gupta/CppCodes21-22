#include<bits/stdc++.h>
using namespace std;
void sort_012(vector<int>& arr) {
	int i = 0, j = 0, k = arr.size() - 1;
	while (i <= k) {
		if (arr[i] == 1) {
			i++;
		}
		else if (arr[i] == 0) {
			swap(arr[i], arr[j]);
			i++;
			j++;
		}
		else if (arr[i] == 2) {
			swap(arr[i], arr[k]);
			k--;
		}
	}
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
	sort_012(arr);
	for (auto it : arr) {
		cout << it << " ";
	}
}