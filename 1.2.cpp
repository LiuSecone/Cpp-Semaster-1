#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
	cout << "Please input N:" << endl;
	int n;
	cin >> n;
	vector<int> map(n + 1, 1); 
	map[0] = 0;
	map[1] = 0;
	for (int i = 2; i * i <= n; ++i) {
		if (map[i]) {
			for (int j = 2; i * j <= n; ++j) {
				map[i * j] = 0;
			}
		}
	}
	ofstream fout("1.2.out", ofstream::out);
	for (auto it = map.begin(); it != map.end(); ++it) {
		if (*it) {
			fout << it - map.begin() << endl;
		}
	}
	return 0;
}
