#include<bits/stdc++.h>
using namespace std;
//all triplets must be unique
//Time complexity-> (N^2) is allowed

/*
//Time complexity-> N(N(log(N))) is allowed
int checkThirdNumber(int arr[], int n, int target, int low, int remainingSum) {
	int high = n - 1;
	while (high >= low) {
		int mid = (low + high) / 2;
		if (arr[mid] == remainingSum) {
			return arr[mid];
		}
		else if (arr[mid] > remainingSum) {
			high--;
		}
		else {
			low++;
		}
	}
	return -1;
}
void target_Sum_Triplet(int arr[], int n, int target) {
	sort(arr, arr + n);
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			int sumOfTwoNumbers = arr[i] + arr[j];
			int remainingSum = target - (arr[i] + arr[j]);
			if (remainingSum >= 0) {
				int res = checkThirdNumber(arr, n, target, j + 1, remainingSum);
				if (res != -1) {
					cout << arr[i] << " " << arr[j] << " " << res << endl;
				}
			}
		}
	}
}
*/

//Time complexity-> O(N^2)
void target_Sum_Triplet(int arr[], int n, int target) {
	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		int sumOfRemainingTwoNumbers = target - arr[i];
		int j = i + 1, k = n - 1;
		while (j < k) {
			if (arr[j] + arr[k] == sumOfRemainingTwoNumbers) {
				cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
				j++;
				k--;
			}
			else if (arr[j] + arr[k] > sumOfRemainingTwoNumbers) {
				k--;
			}
			else {
				j++;
			}
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
	target_Sum_Triplet(arr, n, target);
}