#include<bits/stdc++.h>
using namespace std;
class Person {
public:
	string name;
	int age;
	void sayHi() {
		if (this->age > 18) {
			cout << "Hey what's up" << endl;
		}
		else {
			cout << "Hey dude" << endl;
		}
	}
};
signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Person P1;
	P1.name = "Rishab";
	P1.age = 21;
	P1.sayHi();

	Person P2;
	P2.name = "Ria";
	P2.age = 18;
	P2.sayHi();

	Person P3 = P1;
	P3.name = "Khushi";
	P3.sayHi();
}