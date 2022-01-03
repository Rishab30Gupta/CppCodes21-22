#include<bits/stdc++.h>
using namespace std;

//Expectation=> f(5)=5.4.3.2.1
//faith=> f(4)=4.3.2.1
//EmF=> f(5)=5.f(4)
int factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	int fnm1 = factorial(n - 1);  //4.3.2.1
	int fn = n * fnm1;  //5.4.3.2.1
	return fn;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int fact = factorial(n);
	cout << fact << endl;
}