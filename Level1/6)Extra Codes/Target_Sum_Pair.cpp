#include<bits/stdc++.h>
using namespace std;
//TIME COMPLEXITY -> O(NLOG(N))
//SPACE COMPLEXITY-> O(1)
void target_Sum_Pair(int arr[], int n, int target) {
	sort(arr, arr + n);
	int l = 0, h = n - 1;
	while (h > l) {
		if (arr[l] + arr[h] == target) {
			cout << arr[l] << " " << arr[h] << endl;
			l++;
			h--;
		}
		else if (arr[l] + arr[h] < target) {
			l++;
		}
		else {
			h--;
		}
	}
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, target; cin >> n >> target;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	target_Sum_Pair(arr, n, target);
}