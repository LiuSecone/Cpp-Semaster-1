#include <iostream>

using namespace std;

float p(int n, float x) {
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return x;
	}
	return (((2 * n - 1) * x * p(n - 1, x) - (n -1) * p(n - 2, x))/n);
}

int main() {
	cout << "Pleas input the integer number n:" << endl;
	int n;
	cin >> n;
	cout << "Pleas input the real number x:" << endl;
	float x;
	cin >> x;
	cout << p(n, x);
	return 0;
}

