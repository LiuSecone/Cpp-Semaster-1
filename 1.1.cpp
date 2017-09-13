#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
	uniform_int_distribution<int> u(1,1000);
	default_random_engine e(time(0));
	e();
	const int price = u(e);
	int guess = 0;
	cout << price << endl << guess << endl;
	while (guess != price) {
		cin.clear();
		cin.sync();
		cout << "Please input the price:" << endl;
		if (cin >> guess && guess > 0) {
			cout << "You guess number is " << guess;
			if (guess > price) {
				cout << ", You guess more Experience" << endl;
			}
			if (guess < price) {
				cout << ", You guess cheaper." << endl;
			}
		} else {
			cout << "Invalid, please input again." << endl;
		}
	}
	cout << "Correct, Congratulations.";
	return 0;
}
