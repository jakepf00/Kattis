#include<bits/stdc++.h>

using namespace std;

int main() {
	string stones;
	cin >> stones;
	int white = 0, black = 0;
	for (auto i : stones) {
		if (i == 'W') white++;
		else black++;
	}
	if (white == black) cout << 1 << endl;
	else cout << 0 << endl;
}
