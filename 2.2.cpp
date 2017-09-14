/*
Gread Two Semaster One Small Semaster
Test 2 Problem 2
Verson:1.0
Date:2017.9.13
Copyright:Liu Secone
*/
#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
	double m_x = 0, m_y = 0;
public:
	void init(double x = 0, double y = 0);
	void init(Point Poi);
	double getx();
	double gety();
	double getdist(double x, double y);
	double getdist(Point Poi);
};

void Point::init(double x, double y) {
	m_x = x;
	m_y = y;
	return;
}

void Point::init(Point Poi) {
	*this = Poi;
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

class Circle {
private:
	Point m_o;
	double m_rad;
public:
	void init(Circle Cir);
	void init(Point o, double r);
	void init(double x, double y, double r);
	double getx(Circle Cir);
	double gety(Circle Cir);
	double getr(Circle Cir);
	int judgecross(Circle Cir);
	int judgecross(double x, double y, double r);
};

void Circle::init(Circle Cir) {
	*this = Cir;
	return;
}

void Circle::init(Point o, double r) {
	m_o = o;
	m_rad = r;
	return;
}

void Circle::init(double x, double y, double r) {
	m_o.init(x, y);
	m_rad = r;
	return;
}

double Circle::getx(Circle Cir) {
	return m_o.getx();
}

double Circle::gety(Circle Cir) {
	return m_o.gety();
}

double Circle::getr(Circle Cir) {
	return m_rad;
}

int Circle::judgecross(double x, double y, double r) {
	int dis = m_o.getdist(x, y);
	if (dis > (m_rad + r)){
		return 0;
	} else {
		return 1;
	}
}

int Circle::judgecross(Circle Cir) {
	return Cir.judgecross(m_o.getx(), m_o.gety(), m_rad);
}

int main() {
	Circle c1, c2;
	cout << "Please input the x y and r of circle 1:" << endl;
	int x, y, r;
	cin >> x >> y >> r;
	c1.init(x, y, r);
	cout << "Please input the x y and r of circle 1:" << endl;
	cin >> x >> y >> r;
	c2.init(x, y, r);
	if (c1.judgecross(c2)) {
		cout << "Cross" << endl;
	} else {
		cout << "Not Cross" << endl;
	}
	return 0;
}
