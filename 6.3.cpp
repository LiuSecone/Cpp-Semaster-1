/*
Gread Two Semaster One Small Semaster
Test 6 Problem 2
Verson:1.0
Date:2017.9.21
Copyright:Liu Secone
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string str;
	//define in file stream
	cout << "Please input the file name: " << endl;
	cin >> str;
	ifstream fin(str, ifstream::in);
	if (!fin.is_open()) {
		cout << "Can't open the file: " << str << endl;
		return 0;
	}
	//define out file stream
	str += ".out";
	ofstream fout(str, ofstream::out);
	if (!fout.is_open()) {
		cout << "Can't write the file: " << str << endl;
		return 0;
	}
	//get each line and add the number
	int count = 0;
	while (!fin.eof()) {
		getline(fin, str);
		if (!str.empty()) { 
			fout << ++count << "." << str << endl;
		}
	}
	//done
	cout << "line number has been added." << endl;
	fin.close();
	fout.close();
	return 0;
}
