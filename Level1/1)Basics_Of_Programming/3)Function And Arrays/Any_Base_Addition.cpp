#include<bits/stdc++.h>
using namespace std;
int count_digits(int num) {
	int count = 0;
	while (num != 0) {
		count++;
		num /= 10;
	}
	return count;
}
int getSum(int givenbase, int num1, int num2) {
	int answer1 = 0;

	int digits = count_digits(num1);
	for (int i = 0; i < digits; i++) {
		int n = num1 % 10;
		answer1 = answer1 + (n * pow(givenbase, i));
		num1 = num1 / 10;
	}
	int answer2 = 0;

	int digits2 = count_digits(num2);
	for (int i = 0; i < digits2; i++) {
		int n = num2 % 10;
		answer2 = answer2 + (n * pow(givenbase, i));
		num2 = num2 / 10;
	}
	int final_answer = answer1 + answer2;

	//converting back into given base
	vector<int>r;
	while (final_answer != 0) {
		int rem = final_answer % givenbase;
		r.push_back(rem);
		final_answer = final_answer / givenbase;
	}
	reverse(r.begin(), r.end());
	string res;
	for (auto it : r) {
		res = res + to_string(it);
	}
	int fres = stoi(res);
	return fres;
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int givenbase, num1, num2;
	cin >> givenbase >> num1 >> num2;
	cout << getSum(givenbase, num1, num2) << endl;
}
