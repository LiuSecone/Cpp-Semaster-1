/*
Gread Two Semaster One Small Semaster
Test 6 Problem 1
Verson:1.0
Date:2017.9.21
Copyright:Liu Secone
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
	//define file out stream
	ofstream fout("6.1.out", fstream::out);
	if (!fout.is_open()) {
		cout << "Can't open the file." << endl;
		return 0;
	}
	//initialization the value
	int i = 15;
	unsigned u = 100;
	long l = 100;
	float f = 111.111111;
	double d = 111.111111;
	string str = "100";
	fout << "integer: " << i << endl;
	fout << "unsigned integer: " << u << endl;
	fout << "long integer: " << l << endl;
	fout << "float: " << f << endl;
	fout << "double: " << d << endl;
	fout << "string: " << str << endl;
	fout << "output integer in hex: " << hex << i << endl;
	fout << "output inetger in oct: " << oct << i << endl;
	fout << "output integer in dec: " << dec << i << endl;
	//set the precision
	fout.precision(4);
	fout << "set the periciton is 4: " << f << endl;
	fout << "set the periciton is 6: " << setprecision(6) << d << endl;
	fout << "setfill * and setw 10: " << setfill('*') << setw(10) << i << endl;
	//close the file
	fout.close();
	return 0;
}
