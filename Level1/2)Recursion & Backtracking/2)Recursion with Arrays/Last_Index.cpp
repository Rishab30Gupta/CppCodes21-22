#include<bits/stdc++.h>
using namespace std;
int lastIndex(int arr[], int idx, int x, int n) {
//Expectation=> firstIndex(arr,idx,x,n) 0->(n-1) ka greatest index le aayega.
//Faith=> firstIndex(arr,idx+1,x,n) 1->(n-1) ka greatest index le aayega.
//EMF=> if faith answer le aayega toh directly wohi return krdenge warna ek ek krke compare karenge ki arr[idx]==x hai ya nhi neeche aate hue
	if (idx == n) {
		return -1;
	}
	int FaithArray = lastIndex(arr, idx + 1, x, n);
	if (FaithArray == -1) {
		if (arr[idx] == x) {
			return idx;
		}
		else {
			return -1;
		}
	}
	else {
		return FaithArray;
	}
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int d; cin >> d;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << lastIndex(arr, 0, d, n);
}