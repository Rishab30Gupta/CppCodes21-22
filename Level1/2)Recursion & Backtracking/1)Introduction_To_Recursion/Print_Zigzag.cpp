#include<bits/stdc++.h>
using namespace std;
//Expectation->pzz(3):321112111232111211123
//Faith->pzz(2):211121112
//EMF->3pzz(2)3pzz(2)3
void printZigZag(int n) {
    if (n == 0)return;
    cout << n << " ";
    printZigZag(n - 1);
    cout << n << " ";
    printZigZag(n - 1);
    cout << n << " ";
}
signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;
    printZigZag(n);
    return 0;
}