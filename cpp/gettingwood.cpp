#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	auto a = s.find("tree");
	if (a != string::npos) cout << a << endl;
	else cout << "no trees here" << endl;
}
