#include<bits/stdc++.h>
using namespace std;
bool isSafeToPlaceQueens(vector<vector<int>>chess, int row, int col) {
	//Checking Same Column
	for (int i = row - 1, j = col; i >= 0; i--) {
		if (chess[i][j] == 1) {
			return false;
		}
	}
	//Checking Left Diagonal
	for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
		if (chess[i][j] == 1) {
			return false;
		}
	}
	//Checking Right Diagonal
	for (int i = row - 1, j = col + 1; i >= 0 && j < chess.size(); i--, j++) {
		if (chess[i][j] == 1) {
			return false;
		}
	}
	return true;
}
void printQueensPath(vector<vector<int>>chess, string ans, int row) {
	if (row == chess.size()) {
		//When all queens are placed
		cout << ans << "." << endl;
		return;
	}
	for (int col = 0; col < chess.size(); col++) {
		if (isSafeToPlaceQueens(chess, row, col) == true) {
			//Set the queen
			chess[row][col] = 1;
			printQueensPath(chess, ans + to_string(row) + "-" + to_string(col) + ", ", row + 1);
			//Unset the queen
			chess[row][col] = 0;
		}
	}
}
void printNQueens(vector<vector<int>> chess, string ans) {
	printQueensPath(chess, ans, 0);
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	vector<vector<int>>chess(n, vector<int>(n));
	printNQueens(chess, "");
}