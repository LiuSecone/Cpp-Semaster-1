/*
Gread Two Semaster One Small Semaster
Test 5 Problem 1
Verson:1.0
Date:2017.9.19
Copyright:Liu Secone
*/
#include <iostream>

using namespace std;

class Point {
private:
	double m_x, m_y;
public:
	//constructor function
	Point(double x = 0, double y = 0) {
		m_x = x;
		m_y = y;
		return;
	}
	//copy constructor function
	Point(const Point &p) {
		*this = p;
		return;
	}
	//print funciton
	void printpoint();
	//overload the self operator
	Point &operator++();
	Point operator++(int);
	Point &operator--();
	Point operator--(int);
};

void Point::printpoint() {
	cout << "The X is: " << m_x << ", and the Y is:" << m_y << endl;
	return;
}

Point &Point::operator++() {
	++m_x;
	++m_y;
	return *this;
}

Point Point::operator++(int) {
	Point temp = *this;
	++*this;
	return temp;
}

Point &Point::operator--() {
	--m_x;
	--m_y;
	return *this;
}

Point Point::operator--(int) {
	Point temp = *this;
	--*this;
	return temp;
}

int main() {
	Point p;
	p.printpoint();
	p++;
	p.printpoint();
	++p;
	p.printpoint();
	p--;
	p.printpoint();
	--p;
	p.printpoint();
	return 0;
}
