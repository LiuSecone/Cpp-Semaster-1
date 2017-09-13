#include <iostream>

using namespace std;

class Clock {
public:
	void SetTime(int Hour, int Min, int Sec);
	void ShowTime();
private:
	int Hour, Min, Sec;
};

void Clock::SetTime(int Hour, int Min, int Sec) {
	this -> Hour = Hour;
	this -> Min = Min;
	this -> Sec = Sec;
	return;
}

void Clock::ShowTime() {
	cout << Hour << ':' << Sec << ':' << Min << endl;
	return;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << a << b << c << endl; 
	Clock clo;
	clo.SetTime(a ,b ,c);
	clo.ShowTime();
	return 0;
}
