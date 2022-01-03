#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

#define ios         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int         int64_t
#define mod         1000000007
#define PI          3.141592653589793238462
#define INF         1e18
#define ff          first
#define ss          second
#define pb          push_back
#define pii         pair<int,int>
#define mii         map<int,int>
#define max_heap    priority_queue<int>
#define min_heap    priority_queue<int,vector<int>,greater<int>>
#define vi          vector<int>
#define setbits(x)  __builtin_popcountll(x)
#define ps(x,y)     fixed<<setprecision(y)<<x
#define bs          binary_search
#define lbnd        lower_bound
#define ubnd        upper_bound
#define endl        '\n'
#define all(a)      (a).begin(),(a).end()
#define ini(a, i)   memset(a, i, sizeof(a))
#define sz(x)       (int)x.size()
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))


/*
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
*/

/*------------------------------------------------------------------------------------------------*/
/*

int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int pow(int base, int x) {int ans = 1; while (x != 0) {if (x % 2 == 0){base = base * base;x /= 2;} else ans = ans * base; x = x - 1;} return ans;}
bool isPrime(int N) {if (N < 2)return false; if (N < 4)return true; if ((N & 1) == 0)return false; if (N % 3 == 0)return false; int curr = 5, s = sqrt(N); while (curr <= s) {if (N % curr == 0)return false; curr += 2; if (N % curr == 0)return false; curr += 4;} return true;}

*/
/*------------------------------------------------------------------------------------------------*/

void c_r_g() {

}
signed main() {
	ios
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//freopen("error.txt", "w", stderr);
#endif
	int test = 1;
	//cin >> test;
	while (test--) {
		c_r_g();
		cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
	}
}
