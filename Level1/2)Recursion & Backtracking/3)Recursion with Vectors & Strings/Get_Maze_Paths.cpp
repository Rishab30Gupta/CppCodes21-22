#include<bits/stdc++.h>
using namespace std;
//Expectation->getMazePaths(sr,sc,dr,dc)= {[hhvv, hvhv, hvvh, vhhv, vhvh, vvhh]}
//Faith->getMazePaths(sr,sc+1,dr,dc) and (sr+1,sc,dr,dc)= {[hvv,vhv,vvh,hhv,hvh,vhh]}
//EMF->'h'+ getMazePaths(sr,sc+1,dr,dc) and 'v' + getMazePaths(sr+1,sc,dr,dc)
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
	//Base Case->
	if (sr > dr or sc > dc) {
		vector<string>bres;
		return bres;
	}
	else if (sr == dr and sc == dc) {
		vector<string>bres;
		bres.push_back("");
		return bres;
	}
	vector<string>myPaths;
	vector<string>myHPaths = getMazePaths(sr, sc + 1, dr, dc);
	vector<string>myVPaths = getMazePaths(sr + 1, sc, dr, dc);
	for (string it : myHPaths) {
		myPaths.push_back('h' + it);
	}
	for (string it : myVPaths) {
		myPaths.push_back('v' + it);
	}
	return myPaths;
}
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m; cin >> n >> m;
	vector<string> ans = getMazePaths(0, 0, n - 1, m - 1);
	cout << "[";
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i];
		if (i < ans.size() - 1) {
			cout << ", ";
		}
	}
	cout << "]" << endl;
}