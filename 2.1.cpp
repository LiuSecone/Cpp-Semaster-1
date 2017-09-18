/*
Gread Two Semaster One Small Semaster
Test 2 Problem 1
Verson:1.0
Date:2017.9.13
Copyright:Liu Secone
*/
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

class Point {
private:
	double m_x = 0, m_y = 0;
public:
	//constructor function and the x y was set as 0 defaultly
	Point (double x = 0, double y = 0) {
		m_x = x;
		m_y = y;
		system("pause");
		return;
	}
	//initialization function
	void init(Point Poi);
	void init(double x, double y);
	//return x and y of the point
	double getx();
	double gety();
	//return the distance
	double getdist(double x, double y);
	double getdist(Point Poi);
};

void Point::init(Point Poi) {
	*this = Poi;
	return;
}

void Point::init(double x, double y) {
	m_x = x;
	m_y = y;
	return;
}

double Point::getx() {
	return m_x;
}

double Point::gety() {
	return m_y;
}

double Point::getdist(double x, double y) {
	double disx, disy;
	disx = x - m_x;
	disy = y - m_y;
	return sqrt(disx * disx + disy * disy);
}

double Point::getdist(Point Poi) {
	return Poi.getdist(m_x, m_y);
}

class Square {
private:
	Point m_p1, m_p2;
public:
	void init (Square squ);
	void init(Point p1, Point p2);
	void init(double x1, double y1, double x2, double y2);
	double getarea();
};

void Square::init(Square squ) {
	*this = squ;
	return;
}

void Square::init(Point p1, Point p2) {
	m_p1 = p1;
	m_p2 = p2;
	return;
}

void Square::init(double x1, double y1, double x2, double y2) {
	m_p1.init(x1, y1);
	m_p2.init(x2, y2);
	return;
}

double Square::getarea() {
	return (m_p2.getx() - m_p1.getx()) * (m_p2.gety() - m_p1.gety());
}

int main() {
	Square qsua;
	double x1, x2, y1, y2;
	cout << "Please input point1 x and y:" << endl;
	cin >> x1 >> y1;
	cout << "Please input point2 x and y:" << endl;
	cin >> x2 >> y2;
	//check the legitimacy of the input
	if (x1 >= x2 && y1 >= y2) {
		double temp;
		temp = x1; x1 = x2; x2 = temp;
		temp = y1; y1 = y2; y2 = temp;
	}
	//initialize and caculate the area
	qsua.init(x1, y1, x2, y2);
	cout << qsua.getarea() << endl;
	return 0;
}
