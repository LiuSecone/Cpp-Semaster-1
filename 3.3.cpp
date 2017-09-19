/*
Gread Two Semaster One Small Semaster
Test 3 Problem 3
Verson:1.0
Date:2017.9.18
Copyright:Liu Secone
*/
#include <iostream>
#include <iomanip>

using namespace std;

class Matrix {
private:
	int m_lines, m_rows;
	//point to matrix
	int *m_pm;
public:
	//default constructor function
	/*
	Matrix() {
		m_lines = 0;
		m_rows = 0;
		m_pm = NULL;
		return;
	}
	*/
	//constructor function
	Matrix(int lines = 0, int rows = 0) {
		m_lines = lines;
		m_rows = rows;
		m_pm = new int[lines * rows];
		return;
	}
	//copy constrctor function
	Matrix (const Matrix &m) {
		m_lines = m.m_lines;
		m_rows = m.m_rows;
		m_pm = new int[m_lines * m_rows];
		memcpy(m_pm, m.m_pm, sizeof(*m_pm) * m_lines * m_rows);
	}
	//descurtor function 
	~Matrix() {
		delete [] m_pm;
		return;
	}
	//return the lines rows and the point to matrix
	int getlines();
	int getrows();
	int* getpoint();
	//read the matrix
	void getMatrix();
	//print the matrix
	void printMatrix();
	//add another matrix and return a matrix
	Matrix addMatrix(const Matrix &A2);
	//minus another matrix and return a matrix
	Matrix minusMatrix(const Matrix &A2);
	//overload the operator=
	Matrix& operator=(const Matrix& m);
};

int Matrix::getlines() {
	return m_lines;
}

int Matrix::getrows() {
	return m_rows;
}

int *Matrix::getpoint() {
	return m_pm;
}

void Matrix::getMatrix() {
	for (int i = 0; i < m_lines; ++i) {
		for (int j = 0; j < m_rows; ++j) {
			cin >> *(m_pm + i * m_rows + j);
		}
	}
	return;
}

void Matrix::printMatrix() {
	cout << "line(s):" << m_lines << "	row(s):" << m_rows << endl;
	for (int i = 0; i < m_lines; ++i) {
		for (int j = 0; j < m_rows; ++j) {
			cout << setw(5) << *(m_pm + i * m_rows + j);
		}
		cout << endl;
	}
}

Matrix Matrix::addMatrix(const Matrix &A2) {
	//judge the legitimacy of the matrix
	if (m_lines == A2.m_lines && m_rows == A2.m_rows) {
		Matrix temp(m_lines, m_rows);
		for (int i = 0; i < m_lines * m_rows; ++i) {
			*(temp.m_pm + i) = *(m_pm + i) + *(A2.m_pm + i);
		}
		return temp;
	} else {
		//if the operation is illegal, then return the empty matrix
		cout << "Can't add." << endl;
		Matrix temp(0, 0);
		return temp;
	}
}

Matrix Matrix::minusMatrix(const Matrix &A2) {
	if (m_lines == A2.m_lines && m_rows == A2.m_rows) {
		Matrix temp(m_lines, m_rows);
		for (int i = 0; i < m_lines * m_rows; ++i) {
			*(temp.m_pm + i) = *(m_pm + i) - *(A2.m_pm + i);
		}
		return temp;
	} else {
		cout << "Can't minus." << endl;
		Matrix temp(0, 0);
		return temp;
	}
}

Matrix& Matrix::operator=(const Matrix &m) {
	//avoid self-evaluation
	if (this != &m) {
		//delete old memory
		delete [] m_pm;
		m_lines = m.m_lines;
		m_rows = m.m_rows;
		m_pm = new int[m_lines * m_rows];
		//memory copy
		memcpy(m_pm, m.m_pm, sizeof(*m_pm) * m_lines * m_rows);
	}
	return *this;
}

int main() {
	//set and read
	int x, y;
	cout << "Please input the Matrix 1 lines and rows:" << endl;
	cin >> x >> y;
	Matrix A1(x, y);
	cout << "Please input the Matrix 1:" << endl;
	A1.getMatrix();
	cout << "Please input the Matrix 2 lines and rows:" << endl;
	cin >> x >> y;
	Matrix A2(x, y);
	cout << "Please input the Matrix 2:" << endl;
	A2.getMatrix();
	Matrix A3;
	//plus and print
	A3 = A1.addMatrix(A2);
	A3.printMatrix();
	//minus and print
	A3 = A1.minusMatrix(A2);
	A3.printMatrix();
	//set and initializtion
	Matrix *pA1, *pA2, *pA3;
	pA1 = new Matrix(A1);
	pA2 = new Matrix(A2);
	pA3 = new Matrix;
	//add and print
	*pA3 = (*pA1).addMatrix(*pA2);
	(*pA3).printMatrix();
	//minus and print
	*pA3 = (*pA1).minusMatrix(*pA2);
	(*pA3).printMatrix();
	return 0;
}
