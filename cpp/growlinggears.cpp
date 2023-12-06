#include<bits/stdc++.h>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		int gears;
		cin >> gears;
		long double max = 0;
		int gear = 0;
		for (int i = 0; i < gears; i++) {
			long double a, b, c;
			cin >> a >> b >> c;
			long double x = b / (2 * a);
			long double torque = ((-a) * x * x) + (b * x) + c;
			if (torque > max) {
				max = torque;
				gear = i + 1;
			}
		}
		cout << gear << endl;

	}	
}
