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
	/*
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= 0; j--) {
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
	*/

	//created transpose of a matrix
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int temp = arr[j][i];
			arr[j][i] = arr[i][j];
			arr[i][j] = temp;
		}
	}

	//reverse the columns
	for (int i = 0; i < n; i++) {
		int low = 0, high = n - 1;
		while (low < high) {
			swap(arr[i][low], arr[i][high]);
			low++;
			high--;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}