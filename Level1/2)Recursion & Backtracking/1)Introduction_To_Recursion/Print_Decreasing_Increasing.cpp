#include<bits/stdc++.h>
using namespace std;

//Expectation => pdi(4) = 4 3 2 1 1 2 3 4
//Faith => pdi(3) = 3 2 1 1 2 3
//EmF => 4 pdi(3) 4
void printDecreasingIncreasing(int n) {

	if (n == 0) {
		return;
	}
	cout << n << endl;
	printDecreasingIncreasing(n - 1);
	cout << n << endl;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	printDecreasingIncreasing(n);
}