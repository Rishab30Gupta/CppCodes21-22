#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)cin >> arr[i];

	int limit = pow(2, n);  //total subsets to be formed
	for (int i = 0; i < limit; i++) {
		int temp = i;
		string ans;
		//convert i to binary and use 0's and 1's
		for (int j = n - 1; j >= 0; j--) {
			int r = temp % 2;
			temp = temp / 2;
			if (r == 0) {
				ans = "-	" + ans;
			}
			else {
				ans = to_string(arr[j]) + "	"  + ans;
			}
		}
		cout << ans << endl;
	}
}