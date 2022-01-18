#include<bits/stdc++.h>

using namespace std;

int main() {
	int g, s, c;
	cin >> g >> s >> c;
	int total = 0;
	total += ((3 * g) + (2 * s) + c);
	switch (total) {
		case (0): cout << "Copper" << endl; break;
		case (1): cout << "Copper" << endl; break;
		case (2): cout << "Estate or Copper" << endl; break;
		case (3): cout << "Estate or Silver" << endl; break;
		case (4): cout << "Estate or Silver" << endl; break;
		case (5): cout << "Duchy or Silver" << endl; break;
		case (6): cout << "Duchy or Gold" << endl; break;
		case (7): cout << "Duchy or Gold" << endl; break;
		default: cout << "Province or Gold" << endl; break;
	}
}
