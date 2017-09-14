/*
Gread Two Semaster One Small Semaster
Test 1 Problem 5
Verson:1.0
Date:2017.9.11
Copyright:Liu Secone
*/
#include <iostream>

using namespace std;

int getgcd(int a, int b) {
	return (b == 0 ? a : getgcd(b, a % b));
}

int main() {
	unsigned gcd, lca, a, b;
	cout << "Please input two unsigned number:" << endl;
	cin >> a >> b;
	gcd = getgcd(a, b);
	lca = a * b / gcd;
	cout << "gcd = " << gcd << endl;
	cout << "lca = " << lca << endl;
	return 0;
}
