#include<bits/stdc++.h>
using namespace std;
//Expectation=> firstIndex(arr,idx,x,n) 0->(n-1) ka smallest index le aayega.
//Faith=> firstIndex(arr,idx+1,x,n) 1->(n-1) ka smallest index le aayega.
//EMF=> if(arr[0]==x) return 0 as it will be the smallest otherwise return the index which our faith gave us
int firstIndex(int arr[], int idx, int x, int n) {
	if (idx == n) {   //Base condition
		return -1;
	}
	if (arr[idx] == x) {
		return idx;
	}
	else {
		int faithIndex = firstIndex(arr, idx + 1, x, n);
		return faithIndex;
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
	cout << firstIndex(arr, 0, d, n);
}