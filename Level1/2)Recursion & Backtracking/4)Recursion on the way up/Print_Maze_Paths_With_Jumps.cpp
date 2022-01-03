#include<bits/stdc++.h>
using namespace std;
void printMazePaths(int sr, int sc, int dr, int dc, string ans) {
	//BaseCase
	if (sr == dr && sc == dc) {
		cout << ans << endl;
		return;
	}
	//horizontal
	for (int moves = 1; moves <= dc - sc; moves++) {
		printMazePaths(sr, sc + moves, dr, dc, ans + "h" + to_string(moves));
	}
	//vertical
	for (int moves = 1; moves <= dr - sr; moves++) {
		printMazePaths(sr + moves, sc, dr, dc, ans + "v" + to_string(moves));
	}
	//diagonal
	for (int moves = 1; moves <= dc - sc and moves <= dr - sr; moves++) {
		printMazePaths(sr + moves, sc + moves, dr, dc, ans + "d" + to_string(moves));
	}
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m ; cin >> n >> m;
	printMazePaths(0, 0, n - 1, m - 1, "");
}