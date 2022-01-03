#include<bits/stdc++.h>
using namespace std;

//Expectation => pi(n) = 1 2 3 . . . n-2 n-1 n
//Faith => pi(n-1) = 1 2 3 . . . n-2 n-1
//EwF => pi(n) = pi(n-1)pi(n)
void printIncreasing(int n) {
	if (n == 0) {
		return;
	}
	printIncreasing(n - 1);
	cout << n << endl;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	printIncreasing(n);
}