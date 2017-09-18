/*
Gread Two Semaster One Small Semaster
Test 3 Problem 2
Verson:1.0
Date:2017.9.17
Copyright:Liu Secone
*/
#include <iostream>
#include <iomanip>

using namespace std;

//read the matrix
int getMatrix(int *m)
{
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 5; ++j) {
			cin >> *(m + i * 5 + j);
		}
	}
	return 0;
}

//print the matrix
void printMatrix(int *m) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << setw(5) << *(m + i * 5 + j);
		}
		cout << endl;
	}
	return;
}

//plus two matrix(m1 m2) and save the answer in another one(ans)
void addMatrix(int *ans, int *m1, int *m2) {
	for (int i = 0; i < 4 * 5; ++i) {
		ans[i] = m1[i] + m2[i];
	}
	return;
}

//minus two matrix(m1 m2) and save the answer in another one(ans)
void minusMatrix(int *ans, int *m1, int *m2) {
	for (int i = 0; i < 4 * 5; ++i) {
		ans[i] = m1[i] - m2[i];
	}
	return;
}

int main() {
	//set and read
	int *A1 = new int[20];
	int *A2 = new int[20];
	int *A3 = new int[20];
	cout << "Please input the Matrix 1:" << endl;
	getMatrix(A1);
	cout << "Please input the Matrix 2:" << endl;
	getMatrix(A2);
	//add and print
	addMatrix(A3, A2, A1);
	printMatrix(A3);
	//minus and print
	minusMatrix(A3, A2, A1);
	printMatrix(A3);
	return 0;
}
