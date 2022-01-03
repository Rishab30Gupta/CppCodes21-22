#include<bits/stdc++.h>
using namespace std;
int largest_area_histogram(vector<int>&arr) {

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
	int ans = largest_area_histogram(arr);
	cout << ans << endl;
}