/*
Gread Two Semaster One Small Semaster
Test 2 Problem 3
Verson:1.0
Date:2017.9.14
Copyright:Liu Secone
*/
#include <iostream>

using namespace std;

class Car;

class Boat {
	friend double TotalWeight(const Boat& b, const Car& c);
private:
	double m_weight;
public:
	void init(double weight);
	double getweight();
};

void Boat::init(double weight) {
	m_weight = weight;
	return;
}

double Boat::getweight() {
	return m_weight;
}

class Car {
	friend double TotalWeight(const Boat& b, const Car& c);
private:
	double m_weight;
public:
	void init(double weight);
	double getweight();
};

void Car::init(double weight) {
	m_weight = weight;
	return;
}

double Car::getweight() {
	return m_weight;
}

double TotalWeight(const Boat& b, const Car& c) {
	return b.m_weight + c.m_weight;
}

int main() {
	Boat b;
	Car c;
	int temp;
	cout << "Please input the weight of the boat and the car:" << endl;
	cin >> temp;
	b.init(temp);
	cin >> temp;
	c.init(temp);
	cout << TotalWeight(b, c) << endl;
	return 0;
}
