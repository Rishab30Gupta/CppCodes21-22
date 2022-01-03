#include<bits/stdc++.h>
using namespace std;
void target_Sum_Subset(vector<int>arr, int idx, string ans, int sum_of_subset, int target) {
	//Base case-> when idx reaches at the end of array
	if (idx == arr.size()) {
		if (sum_of_subset == target) {
			cout << ans + "." << endl;
		}
		return;
	}

	//These are two options available pick and not-pick
	target_Sum_Subset(arr, idx + 1, ans + to_string(arr[idx]) + ", ", sum_of_subset + arr[idx], target);
	target_Sum_Subset(arr, idx + 1, ans, sum_of_subset, target);
}
void target_Sum(vector<int>arr, int target) {
	if (arr.size() == 0) {
		return;
	}
	target_Sum_Subset(arr, 0, "", 0, target);
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
	int target; cin >> target;
	target_Sum(arr, target);
}