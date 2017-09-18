/*
Gread Two Semaster One Small Semaster
Test 3 Problem 1
Verson:1.0
Date:2017.9.16
Copyright:Liu Secone
*/
#include <iostream>
#include <iomanip>

using namespace std;

//read the matrix
void getMatrix(int m[][5]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 5; ++j) {
			cin >> m[i][j];
		}
	}
	return;
}

//plus two matrix(m1 m2) and save the answer in another one(ans)
void addMatrix(int ans[][5], int m1[][5], int m2[][5]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 5; ++j) {
			ans[i][j] = m1[i][j] + m2[i][j];
		}
	}
}

//minus two matrix(m1 m2) and save the answer in another one(ans)
void minusMatrix(int ans[][5], int m1[][5], int m2[][5]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 5; ++j) {
			ans[i][j] = m1[i][j] - m2[i][j];
		}
	}
}

//print the matrix on the screen
void printMatrix(int m[][5]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << setw(5) << m[i][j];
		}
		cout << endl;
	}
	return;
}

int main() {
	//set and read two matrix
	int m1[4][5] = { 0 }, m2[4][5] = { 0 };
	cout << "Pleas input the Matrix 1:" << endl;
	getMatrix(m1);
	cout << "Pleas input the Matrix 2:" << endl;
	getMatrix(m2);
	int m3[4][5] = { 0 };
	//add and print
	addMatrix(m3, m2, m1);
	printMatrix(m3);
	//minus and print
	minusMatrix(m3, m2, m1);
	printMatrix(m3);
	return 0;
}
