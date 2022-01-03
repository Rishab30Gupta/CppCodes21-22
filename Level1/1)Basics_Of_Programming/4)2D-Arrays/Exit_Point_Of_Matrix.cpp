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
	int dir = 0, i = 0, j = 0;
	//starting from east,1->south,2->west,3->north
	while (true) {
		dir = (dir + arr[i][j]) % 4;
		if (dir == 0) {  //east
			j++;
		}
		else if (dir == 1) { //south
			i++;
		}
		else if (dir == 2) { //west
			j--;
		}
		else {   //north
			i--;
		}
		if (i < 0) {
			cout << i + 1 << endl << j;
			break;
		}
		if (j < 0) {
			cout << i << endl << j + 1;
			break;
		}
		if (i >= n) {
			cout << i - 1 << endl << j;
			break;
		}
		if (j >= m) {
			cout << i << endl << j - 1;
			break;
		}
	}
}