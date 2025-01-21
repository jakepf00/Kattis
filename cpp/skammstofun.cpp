#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	string b = "";
	while (a--) {
		string c;
		cin >> c;
		if (c[0] >= 'A' && c[0] <= 'Z') b.push_back(c[0]);
	}
	cout << b << endl;
}
