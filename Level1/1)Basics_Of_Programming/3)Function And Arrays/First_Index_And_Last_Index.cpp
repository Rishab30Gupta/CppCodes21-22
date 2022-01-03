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
	int target; cin >> target;

	int first_ind = -1;
	int low = 0, high = n - 1;
	while (low < high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			first_ind = mid;
			high--;
		}
		else if (arr[mid] < target) {
			low++;
		}
		else high--;
	}

	int second_ind = -1;
	low = 0, high = n;
	while (low < high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			second_ind = mid;
			low++;
		}
		else if (arr[mid] > target) {
			high--;
		}
		else low++;
	}

	cout << first_ind << endl << second_ind;
}