#include<bits/stdc++.h>
using namespace std;
void printStairPaths(int n, string ans) {
	//Base case
	if (n < 0) {
		return;
	}
	if (n == 0) {
		cout << ans << endl;
		return;
	}
	printStairPaths(n - 1, ans + "1");
	printStairPaths(n - 2, ans + "2");
	printStairPaths(n - 3, ans + "3");
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	printStairPaths(n, "");
}