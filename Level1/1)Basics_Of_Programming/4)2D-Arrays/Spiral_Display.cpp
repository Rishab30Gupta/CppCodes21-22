#include<bits/stdc++.h>
using namespace std;
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	int arr[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	int minr = 0, minc = 0;
	int maxr = n - 1, maxc = m - 1;
	int total_ele = n * m, counter = 0;
	while (counter < total_ele) {
		//left wall
		for (int i = minr, j = minc; i <= maxr && counter < total_ele; i++) {
			cout << arr[i][j] << endl;
			counter++;
		}
		minc++;
		//bottom wall
		for (int i = maxr, j = minc; j <= maxc && counter < total_ele; j++) {
			cout << arr[i][j] << endl;
			counter++;
		}
		maxr--;
		//right wall
		for (int i = maxr, j = maxc; i >= minr  && counter < total_ele; i--) {
			cout << arr[i][j] << endl;
			counter++;
		}
		maxc--;
		//top wall
		for (int i = minr, j = maxc; j >= minc && counter < total_ele; j--) {
			cout << arr[i][j] << endl;
			counter++;
		}
		minr++;
	}
}