#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//Saddle point is an element which is maximum in its column but minimum in its row
	//There can be maximum 1 saddle point in n*n matrix
	int n; cin >> n;
	int arr[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		//find min of the row->potential saddle point

		int min = arr[i][0];
		int column = 0;
		for (int j = 1; j < n; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
				column = j;
			}
		}
		//confirm if it is maximum in the column->saddle point
		bool isSaddle = true;
		for (int row = 0; row < n; row++) {
			if (arr[row][column] > min) {
				isSaddle = false;
				break;
			}
		}
		if (isSaddle == true) {
			cout << min << endl;
			exit(0);
		}
	}
	cout << "Invalid input" << endl;
}