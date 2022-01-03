#include<bits/stdc++.h>
using namespace std;
void printMazePaths(int sr, int sc, int dr, int dc, string ans) {
	//Base Case
	if (sr > dr || sc > dc)return;
	if (sr == dr && sc == dc) {
		cout << ans << endl;
		return;
	}
	printMazePaths(sr, sc + 1, dr, dc, ans + "h");
	printMazePaths(sr + 1, sc, dr, dc, ans + "v");
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	printMazePaths(0, 0, n - 1, m - 1, "");
}