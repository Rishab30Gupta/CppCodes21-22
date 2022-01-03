#include<bits/stdc++.h>
using namespace std;
void floodfillpaths(vector<vector<int>>arr, int row, int col, string ans, vector<vector<bool>>visited) {
	//BaseCase1-> out of boundaries+obstacle handling+revisiting the visited cells
	if (row < 0 || col < 0 || row == arr.size() || col == arr[0].size() || arr[row][col] == 1 || visited[row][col] == true) {
		return;
	}
	//BaseCase2-> reached our destination
	if (row == arr.size() - 1 && col == arr[0].size() - 1) {
		cout << ans << endl;
		return;
	}
	//Now we will be doing Backtracking
	visited[row][col] = true; //marked that we have visited this cell
	//Exploring all the options we have3
	floodfillpaths(arr, row - 1, col, ans + "t", visited); //top
	floodfillpaths(arr, row, col - 1, ans + "l", visited); //left
	floodfillpaths(arr, row + 1, col, ans + "d", visited); //down
	floodfillpaths(arr, row, col + 1, ans + "r", visited); //right
	visited[row][col] = false; //backtracking and unmarking this cell
}
void floodfill(vector<vector<int>>arr) {
	vector<vector<bool>>visited(arr.size(), vector<bool>(arr[0].size(), false));
	floodfillpaths(arr, 0, 0, "", visited);
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	vector<vector<int>>arr;
	for (int i = 0; i < n; i++) {
		vector<int>vec;
		for (int j = 0; j < m; j++) {
			int x; cin >> x;
			vec.push_back(x);
		}
		arr.push_back(vec);
	}
	floodfill(arr);
}