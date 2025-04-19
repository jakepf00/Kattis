#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin >> a;
	if (a == "1") cout << 1 << endl;
	else if (a == "12") cout << 2 << endl;
	else if (a == "123") cout << 3 << endl;
	else if (a == "1234") cout << 4 << endl;
	else if (a == "12345") cout << 5 << endl;
	else if (a == "123456") cout << 6 << endl;
	else if (a == "1234567") cout << 7 << endl;
	else if (a == "12345678") cout << 8 << endl;
	else if (a == "123456789") cout << 9 << endl;
	else cout << -1 << endl;
}
