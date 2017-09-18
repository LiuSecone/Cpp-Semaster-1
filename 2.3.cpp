/*
Gread Two Semaster One Small Semaster
Test 2 Problem 3
Verson:1.0
Date:2017.9.14
Copyright:Liu Secone
*/
#include <iostream>

using namespace std;

//per declare
class Car;

class Boat {
	//friend function
	friend double TotalWeight(const Boat& b, const Car& c);
private:
	double m_weight;
public:
	//read the weight
	void init(double weight);
	//return the weight
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
	//friend function
	friend double TotalWeight(const Boat& b, const Car& c);
private:
	double m_weight;
public:
	//read the weight
	void init(double weight);
	//return the weight
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
	//read the weight of the boat and car
	cout << "Please input the weight of the boat and the car:" << endl;
	cin >> temp;
	b.init(temp);
	cin >> temp;
	c.init(temp);
	//use TotalWeight to caculate the answer and put it on the screen
	cout << TotalWeight(b, c) << endl;
	return 0;
}
