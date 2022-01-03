#include<bits/stdc++.h>
using namespace std;
void display_board(vector<vector<int>>&chess) {
	for (int i = 0; i < chess.size(); i++) {
		for (int j = 0; j < chess.size(); j++) {
			cout << chess[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
void printKnightsTour(vector<vector<int>>&chess, int row, int col, int move_number) {
	//BaseCase-> Out of boundaries condition
	if (row < 0 || col < 0 || row >= chess.size() || col >= chess.size() || chess[row][col] > 0) {
		return;
	}
	else if (move_number == (chess.size()*chess.size())) {
		chess[row][col] = move_number;
		display_board(chess);
		chess[row][col] = 0;
		return;
	}

	chess[row][col] = move_number;
	//All the eight possible moves that we can visit
	printKnightsTour(chess, row - 2, col + 1, move_number + 1);
	printKnightsTour(chess, row - 1, col + 2, move_number + 1);
	printKnightsTour(chess, row + 1, col + 2, move_number + 1);
	printKnightsTour(chess, row + 2, col + 1, move_number + 1);
	printKnightsTour(chess, row + 2, col - 1, move_number + 1);
	printKnightsTour(chess, row + 1, col - 2, move_number + 1);
	printKnightsTour(chess, row - 1, col - 2, move_number + 1);
	printKnightsTour(chess, row - 2, col - 1, move_number + 1);
	chess[row][col] = 0;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int r, c; cin >> r >> c;
	vector<vector<int>>chess(n, vector<int>(n));
	printKnightsTour(chess, r, c, 1);
}