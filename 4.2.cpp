/*
Gread Two Semaster One Small Semaster
Test 4 Problem 2
Verson:1.0
Date:2017.9.19
Copyright:Liu Secone
*/
#include <iostream>

using namespace std;

const double PI = 3.1415926;

class Shape {
private:
	double m_area;
	
public:
	//constructor function
	Shape() {
		m_area = 0;
		return;
	}
	//destructor function
	virtual ~Shape() {
		cout << "Destructor funciton of Shape" << endl;
		return;
	}
	//this is pure virtual function by using pure-specifier
	virtual double getarea() = 0;
};

//the complier will ignore this function
double Shape::getarea() {
	return m_area;
}

class Rectangle : public Shape {
private:
	double m_a, m_b;
public:
	//constructor function
	Rectangle(double a = 0, double b = 0) {
		m_a = a;
		m_b = b;
		return;
	}
	//destructor function
	~Rectangle() {
		cout << "Destructor funciton of Rectangle" << endl;
		return;
	}
	//caculate the area
	double getarea();
};

double Rectangle::getarea() {
	return m_a * m_b;
}

class Circle : public Shape {
private:
	double m_r;
public:
	//constructor function
	Circle(double r = 0) {
		m_r = r;
		return;
	}
	//destructor function
	~Circle() {
		cout << "Destructor funciton of Circle" << endl;
		return;
	}
	//caculate the area
	double getarea();
};

double Circle::getarea() {
	return m_r * m_r * PI;
}

class Square : public Rectangle {
private:
	double m_a;
public:
	//constructor function
	Square(double a = 0) {
		m_a = a;
		return;
	}
	//destructor function
	~Square() {
		cout << "Destructor funciton of Square" << endl;
		return;
	}
	//caculate the area
	double getarea();
};

double Square::getarea() {
	return m_a * m_a;
}

int main() {
	int a, b, r;
	Shape *sha;
	//caculate the area of the rectangle
	cout << "Please input the a and b of the rectangle:" << endl;
	cin >> a >> b;
	sha = new Rectangle(a, b);
	cout << "The area of the rectangle is " << sha -> getarea() << endl;
	delete sha;
	//caculate the area of the circle
	cout << "Please input the r of the Circle:" << endl;
	cin >> r;
	sha = new Circle(r);
	cout << "The area of the circle is " << sha -> getarea() << endl;
	delete sha;
	//caculate the area of the square
	cout << "Please input the a of the square:" << endl;
	cin >> a;
	sha = new Square(a);
	cout << "The area of the square is " << sha -> getarea() << endl;
	delete sha;
	return 0;
}
