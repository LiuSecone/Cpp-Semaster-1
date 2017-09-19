/*
Gread Two Semaster One Small Semaster
Test 4 Problem 1
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
		cout << "Constructor funciton of Shape" << endl;
		return;
	}
	//destructor function
	~Shape() {
		return;
	}
	//caculate the area
	double getarea();
};

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
		cout << "Constructor funciton of Rectangle" << endl;
		return;
	}
	//destructor function
	~Rectangle() {
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
		cout << "Constructor funciton of Circle" << endl;
		return;
	}
	//destructor function
	~Circle() {
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
		cout << "Constructor funciton of Square" << endl;
		return;
	}
	//destructor function
	~Square() {
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
	//caculate the area of the rectangle
	cout << "Please input the a and b of the rectangle:" << endl;
	cin >> a >> b;
	Rectangle rec(a, b);
	cout << "The area of the rectangle is " << rec.getarea() << endl;
	//caculate the area of the circle
	cout << "Please input the r of the Circle:" << endl;
	cin >> r;
	Circle cir(r);
	cout << "The area of the circle is " << cir.getarea() << endl;
	//caculate the area of the square
	cout << "Please input the a of the square:" << endl;
	cin >> a;
	Square squ(a);
	cout << "The area of the square is " << squ.getarea() << endl;
	return 0;
}
