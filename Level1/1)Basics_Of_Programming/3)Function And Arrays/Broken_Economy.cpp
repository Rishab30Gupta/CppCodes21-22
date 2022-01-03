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


	int low = 0, high = n - 1, first_ans = -1, second_ans = -1;
	while (low < high) {
		//lowerbound
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			cout << target << endl;
			return 0;
		}
		else if (arr[mid] < target) {
			first_ans = arr[mid];
			low++;
		}
		else high--;
	}
	cout << first_ans << " ";
	low = 0, high = n - 1;
	while (low < high) {
		int mid = (low + high) / 2;
		if (arr[mid] == target) {
			cout << target << endl;
			return 0;
		}
		else if (arr[mid] > target) {
			second_ans = arr[mid];
			high--;
		}
		else low++;
	}
	cout << second_ans << " ";
}