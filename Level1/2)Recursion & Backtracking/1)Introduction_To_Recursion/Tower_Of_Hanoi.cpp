#include<iostream>
using namespace std;
//Expectation->toh(3,A,B,C) is supposed to print valid moves (using given instructions)to move 3 discs from A-B using C
//Faith1->toh(2,A,C,B) will print valid moves (using given instructions) to move 2 discs from A->C using B
//Then we will move disc from TA->TB
//Faith2->toh(2,C,B,A) will print valid moves (using given instructions) to move 2 discs from C->B using A
void toh(int n, int t1id, int t2id, int t3id) {
    if (n == 0)return;
    toh(n - 1, t1id, t3id, t2id);
    cout << n << "[" << t1id << " -> " << t2id << "]" << endl;
    toh(n - 1, t3id, t2id, t1id);
}
signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n; cin >> n;
    int n1, n2, n3; cin >> n1 >> n2 >> n3;
    toh(n, n1, n2, n3);
}
