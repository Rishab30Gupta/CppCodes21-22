#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	int target; cin >> target;
	bool flag = false;
	int low = 0, high = (n * n) - 1;
	while (high >= low) {
		int mid = (low + high) / 2;
		if (arr[mid / n][mid % n] == target) {
			flag = true;
			cout << mid / n << endl << mid % n << endl;
			break;
		}
		else if (arr[mid / n][mid % n] > target) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	if (flag == false) {
		cout << "Not Found" << endl;
	}
}