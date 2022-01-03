#include<bits/stdc++.h>
using namespace std;
vector<string>getStairPaths(int n) {
    //Base cases->
    if (n == 0) {
        vector<string>bres;
        bres.push_back("");
        return bres;
    }
    else if (n < 0) {
        vector<string>bres;
        return bres;
    }
    vector<string>PathsFromNm1 = getStairPaths(n - 1);
    vector<string>PathsFromNm2 = getStairPaths(n - 2);
    vector<string>PathsFromNm3 = getStairPaths(n - 3);
    vector<string>totalPaths;
    for (string it : PathsFromNm1) {   // Sabke aage 1 chipkado
        totalPaths.push_back('1' + it);
    }
    for (string it : PathsFromNm2) {   // Sabke aage 2 chipkado
        totalPaths.push_back('2' + it);
    }
    for (string it : PathsFromNm3) {   // Sabke aage 3 chipkado
        totalPaths.push_back('3' + it);
    }
    return totalPaths;
}
signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n; cin >> n;
    vector<string> ans = getStairPaths(n);
    int cnt = 0;
    cout << "[";
    for (string str : ans) {
        if (cnt != ans.size() - 1) {
            cout << str << ", ";
            cnt++;
        }
        else {
            cout << str << "]";
        }
    }
}