#include <iostream>

using namespace std;

int main() {
	for (int i = 1; i <= 9; ++i) {
		for (int j = 1; j <= 9; ++j) {
			if (j < i) {
				cout << "       ";
			} else {
				cout << i << "*" << j << "=" << i * j << " ";
				if (i * j < 10) {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
