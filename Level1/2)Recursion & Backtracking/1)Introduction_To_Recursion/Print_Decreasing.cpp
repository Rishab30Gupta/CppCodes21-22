#include<bits/stdc++.h>
using namespace std;
void printDecreasing(int n) {
	//Base case
	if (n == 0) {
		return;
	}
	cout << n << endl;
	printDecreasing(n - 1);
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	printDecreasing(n);
}