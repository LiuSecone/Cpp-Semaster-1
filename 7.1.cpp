/*
Gread Two Semaster One Small Semaster
Test 7 Problem 1
Verson:1.0
Date:2017.9.21
Copyright:Liu Secone
*/
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class PhoneBook {
private:
	//define the private map to save data
	map<string, string> m_map;
public:
	//find the number by the name
	string find(const string &name);
	//add the number and the name to the phonebook
	int add(const string &name, const string &num);
	//delete them form the phonebook
	int del(const string &name);
	//save the phonebook into file
	int save();
	//load the phonebook from file
	int load();
	//print all data on the screen
	void print();
};

//get the choose number
void getChoose(int &sta);
//judge the choose number and do sth
void judgeChoose(const int &sta);

PhoneBook pb;

int main() {
	int sta = 0;
	//looping until exit
	getChoose(sta);
	while (sta != 7) {
		judgeChoose(sta);
		getChoose(sta);
	}
	return 0;
}

string PhoneBook::find(const string &name) {
	return m_map[name];
}

int PhoneBook::add(const string &name, const string &num) {
	if (!name.empty() && !num.empty()) {
		m_map[name] = num;
		return 1;
	}
	return 0;
}

int PhoneBook::del(const string &name) {
	//if the name is exist
	if (m_map.find(name) != m_map.end()) {
		m_map.erase(name);
		return 1;
	}
	return 0;
}

int PhoneBook::save() {
	//define the out file stream
	ofstream fout("phonebook.dat", fstream::out);
	//make sure it was opened or return false
	if (!fout.is_open()) {
		return 0;
	}
	//use iterator
	for (auto iter = m_map.begin(); iter != m_map.end(); ++iter) {
		fout << iter -> first << endl;
		fout << iter -> second << endl;
	}
	//close the file
	fout.close();
	return 1;
}

int PhoneBook::load() {
	//define in file stream
	ifstream fin("phonebook.dat", fstream::in);
	//make sure it was opened or return false
	if (!fin.is_open()) {
		return 0;
	}
	string name, num;
	//getline and add them
	while (!fin.eof()) {
		getline(fin, name);
		getline(fin, num);
		add(name, num);
	}
	fin.close();
	return 1;
}

void PhoneBook::print() {
	int cnt = 0;
	//use iterator
	for (auto iter = m_map.begin(); iter != m_map.end(); ++iter) {
		cout << "No." << ++cnt << endl;
		cout <<"Name: " << iter -> first << endl;
		cout <<"Number: " << iter -> second << endl;
	}
	return;
}

void getChoose(int &sta) {
	cout << "©°©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©´" << endl;
	cout << "©¦1.Input the name and find it in the phonebook.  ©¦" << endl;
	cout << "©¦2.Input and add them into the phonebook.        ©¦" << endl;
	cout << "©¦3.Input and delete them in the phonebook.       ©¦" << endl;
	cout << "©¦4.Save the phonebook.                           ©¦" << endl;
	cout << "©¦5.Load the phonebook.                           ©¦" << endl;
	cout << "©¦6.Print the phonebook.                          ©¦" << endl;
	cout << "©¦7.Exit the program.                             ©¦" << endl;
	cout << "©¸©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¤©¼" << endl;
	cout << "Please input the number:" << endl;
	cin >> sta;
	getchar();
	return;
}

void judgeChoose(const int &sta) {
	//find
	if (sta == 1) {
		string name, num;
		cout << "Please input the name: " << endl;
		getline(cin, name);
		num = pb.find(name);
		if (num.empty()) {
			cout << "The name \"" << name << "\" dose not exist." << endl;
		} else {
			cout << "The phone number of \"" << name
				<< "\" is: " << num << "." << endl;
		}
	}
	//add
	if (sta == 2) {
		string name, num;
		cout << "Please input the name: " << endl;
		getline(cin, name);
		cout << "Please input the number: " << endl;
		getline(cin, num);
		if (pb.add(name, num)) {
			cout << "Add successed." << endl;
		} else {
			cout << "Add failed." << endl;
		}
	}
	//delete
	if (sta == 3) {
		string name;
		cout << "Please input the name: " << endl;
		getline(cin, name);
		if (pb.del(name)) {
			cout << "Delete successed." << endl;
		} else {
			cout << "Not exist or delete failed." << endl;
		}
	}
	//save
	if (sta == 4) {
		if (pb.save()) {
			cout << "Save successed" << endl;
		} else {
			cout << "Save failed" << endl;
		}
	}
	//load
	if (sta == 5) {
		if (pb.load()) {
			cout << "Load successed" << endl;
		} else {
			cout << "Load failed" << endl;
		}
	}
	//print
	if (sta == 6) {
		pb.print();
	}
	//exit
}
