#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	getline(cin, a);
	if (a.substr(a.length() - 3, 3) == "eh?") cout << "Canadian!" << endl;
	else cout << "Imposter!" << endl;
}
