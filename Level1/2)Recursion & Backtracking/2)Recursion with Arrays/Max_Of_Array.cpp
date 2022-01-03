#include<bits/stdc++.h>
using namespace std;

//Expectation->mxiElement(arr,0,n)= max(1,11,8,4,5)=11
//Faith->mxiElement(arr,1,n)=max(11,8,4,5)=11
//EMF->after getting faith compare with the first element of array
int mxiElement(int arr[], int indx, int n) {
	if (indx == n - 1) {
		return arr[indx];
	}
	int mxi = mxiElement(arr, indx + 1, n); //it is the maximum element from indx+1 to the end
	if (mxi > arr[indx]) {
		return mxi;
	}
	else return arr[indx];
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
	cout << mxiElement(arr, 0, n);
}