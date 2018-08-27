#include<bits/stdc++.h>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(9);
	double V, D;
	while (cin >> D >> V) {
		if (D == 0) return 0;

		double totalVolume = M_PI * pow(D/2, 2) * D;
		double woodRemaining = totalVolume - V;
		double cones = (D/3) * M_PI * pow(D/2, 2);
		double smallCubeThing = woodRemaining - cones;
		double smallCylinder = smallCubeThing * 1.5;
		double d = 2 * pow((smallCylinder / (M_PI * 2)), (1.0/3));

		cout << d << endl;
	}
}
