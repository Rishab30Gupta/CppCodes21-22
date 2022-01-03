#include<bits/stdc++.h>
using namespace std;
int power_logarithmic(int x, int n) {
	if (n == 0) {
		return 1;
	}
	int smallans = power_logarithmic(x, n / 2);
	int ourans = smallans * smallans;

	//if power is odd then we have to multiply 1 extra x into the answer
	if (n % 2 == 1) {
		ourans = ourans * x;
	}
	return ourans;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x; cin >> x >> n;
	int pwr = power_logarithmic(x, n);
	cout << pwr << endl;
}