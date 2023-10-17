#include<bits/stdc++.h>
using namespace std;

int main() {
	int a = 0, b = 0;
	string c;
	cin >> c;
	for (int i = 0; i < c.length(); i += 2) {
		if (c[i] == 'A') a += (c[i + 1] == '1' ? 1 : 2);
		else b += (c[i + 1] == '1' ? 1 : 2);
	}
	if (a > b) cout << "A" << endl;
	else cout << "B" << endl;
}
