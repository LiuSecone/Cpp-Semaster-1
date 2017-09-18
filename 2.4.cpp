/*
Gread Two Semaster One Small Semaster
Test 2 Problem 4
Verson:1.0
Date:2017.9.14
Copyright:Liu Secone
*/
#include <iostream>

using namespace std;

class Fraction {
private:
	int m_a, m_b;
public:
	Fraction(int a = 0, int b = 1) {
		 m_a = a;
		 m_b = b;
		 return;
	}
	~Fraction () {
	}
	int set(int a, int b);
	void print();
	double value();
	void invert();
};

int Fraction::set(int a, int b) {
	if (b == 0) return 0;
	m_a = a;
	m_b = b;
	return 1;
}

void Fraction::print() {
	cout << m_a << '/' << m_b << endl;
	return;
}

double Fraction::value() {
	return (double)m_a / (double)m_b;
}

void Fraction::invert() {
	int temp;
	temp = m_a;
	m_a = m_b;
	m_b = temp;
	return;
}

int main() {
	Fraction fra;
	fra.set(10, 6);
	fra.print();
	fra.invert();
	cout << fra.value() << endl;
	return 0;
}