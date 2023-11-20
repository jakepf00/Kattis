#include<bits/stdc++.h>
using namespace std;

int main() {
	long double h, p;
	long double inc = 0, low = 0;
	cin >> h >> p;
	int day = 1;
	int incBought = 0;

	low = 60.0;

	while (true) {
		if (day * h > incBought * 1000) {
			incBought++;
			inc += 5;
		}

		inc += (60.0 * h * p) / 100000.0;
		low += (11.0 * h * p) / 100000.0;

		if (low < inc) {
			cout << day << endl;
			break;
		}
		day++;
	}
}
