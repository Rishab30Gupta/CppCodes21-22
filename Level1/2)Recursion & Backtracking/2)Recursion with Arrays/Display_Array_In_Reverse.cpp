#include<bits/stdc++.h>
using namespace std;
//Expectation->dA(arr,0)=1 2 3 4 5
//Faith->dA(arr,1)= 2 3 4 5
//EMF->dA(arr,0)=dA(arr,1)arr[0]
void display(int arr[], int idx, int n) {
	if (n == idx) {
		return;
	}
	display(arr, idx + 1, n);
	cout << arr[idx] << endl;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	display(arr, 0, n);
}