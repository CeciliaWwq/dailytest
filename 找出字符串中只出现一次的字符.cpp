/*
#include<iostream>
#include<string>
using namespace std;
const int tableSize = 256;
int hasTable[tableSize];
int main() {
	string s;
	while (cin >> s) {
		bool flag = false;
		for (int i = 0; i < tableSize; ++i) hasTable[i] = 0;
		for (int i = 0; i < s.size(); ++i) hasTable[s[i]]++;
		for (int i = 0; !flag && i < s.size(); ++i) {
			if (hasTable[s[i]] == 1) {
				cout << s[i] << endl;
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << '.' << endl;
	}
	return 0;
}
*/