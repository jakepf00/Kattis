#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin >> a;
	if (a.find("U") == string::npos) cout << "U";
	if (a.find("A") == string::npos) cout << "A";
	if (a.find("P") == string::npos) cout << "P";
	if (a.find("C") == string::npos) cout << "C";
	cout << endl;
}
