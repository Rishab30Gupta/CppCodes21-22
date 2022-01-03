#include<bits/stdc++.h>
using namespace std;
//Expectation=> power(2,5)=2.2.2.2.2
//Faith=> power(2,4)=2.2.2.2
//EmF=>power(2,4).2
int power_linear(int x, int n) {
	if (n == 0) {
		return 1;
	}
	int smallPower = power_linear(x, n - 1);
	int ourans = x * smallPower;
	return ourans;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x; cin >> x >> n;
	int pwr = power_linear(x, n);
	cout << pwr << endl;
}