#include<bits/stdc++.h>
using namespace std;
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
	//Base Case
	if (sr == dr && sc == dc) {
		vector<string>bres;
		bres.push_back("");
		return bres;
	}
	vector<string>totalPaths;
	//Horizontal Moves
	for (int moves = 1; moves <= dc - sc; moves++) {
		vector<string>hpaths = getMazePaths(sr, sc + moves, dr, dc);
		for (string it : hpaths) {
			totalPaths.push_back("h" + to_string(moves) + it);
		}
	}
	//Vertical Moves
	for (int moves = 1; moves <= dr - sr; moves++) {
		vector<string>vpaths = getMazePaths(sr + moves, sc, dr, dc);
		for (string it : vpaths) {
			totalPaths.push_back("v" + to_string(moves) + it);
		}
	}
	//Diagonal Moves
	for (int moves = 1; moves <= dc - sc and moves <= dr - sr; moves++) {
		vector<string>dpaths = getMazePaths(sr + moves, sc + moves, dr, dc);
		for (string it : dpaths) {
			totalPaths.push_back("d" + to_string(moves) + it);
		}
	}
	return totalPaths;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	vector<string> ans = getMazePaths(0, 0, n - 1, m - 1);
	cout << "[";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i];
		if (i < ans.size() - 1) cout << ", ";
	}

	cout << "]" << endl;
}