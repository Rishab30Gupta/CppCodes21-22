#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int maxi = INT_MIN, second_mxi = INT_MIN, mini = INT_MAX, second_mini = INT_MAX;
	while (n--) {
		int x; cin >> x;
		if (x > maxi) {
			second_mxi = maxi;
			maxi = x;
		}
		else second_mxi = max(second_mxi, x);
		if (x < mini) {
			second_mini = mini;
			mini = x;
		}
		else second_mini = min(second_mini, x);
	}
	cout << second_mxi << " " << second_mini << endl;
}