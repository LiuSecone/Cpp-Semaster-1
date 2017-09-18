/*
Gread Two Semaster One Small Semaster
Test 1 Problem 1
Verson:1.0
Date:2017.9.11
Copyright:Liu Secone
*/
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main() {
	// use C++11 random engine to creat random number
	uniform_int_distribution<int> u(1,1000);
	default_random_engine e(time(0));
	e();
	//creat the random price
	const int price = u(e);
	int guess = 0;
	cout << price << endl << guess << endl;
	//guess the number
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
