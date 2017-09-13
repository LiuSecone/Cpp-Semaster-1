#include <iostream>
#include <vector>

using namespace std;

int getfib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return getfib(n-1) + getfib(n - 2);
}

int main() {
	int n;
	cout << "Please input unsigned number:" << endl;
	cin >> n;
	cout << getfib(n) << endl;
	int a, b, c;
	a = 1;
	b = 1;
	for (int i = 3; i <= n; ++i) {
		c = a + b;
		a = b;
		b = c;
	}
	cout << b;
	return 0;
}
