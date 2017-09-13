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
