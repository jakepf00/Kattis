#include<bits/stdc++.h>

using namespace std;

static double calcDistance(double x, double y, double x1, double y1) {
	return sqrt(pow((x - x1), 2) + pow((y - y1), 2));
}

int main() {
	cout << fixed << showpoint << setprecision(9);
	double x, y, x1, y1, x2, y2;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	if (x < x1 && y < y1) {
		cout << calcDistance(x, y, x1, y1) << endl; 
		return 0;
	}
	if (x > x2 && y < y1) {
		cout << calcDistance(x, y, x2, y1) << endl;
		return 0;
	}
	if (x < x1 && y > y2) {
		cout << calcDistance(x, y, x1, y2) << endl;
		return 0;
	}
	if (x > x2 && y > y2) {
		cout << calcDistance(x, y, x2, y2) << endl;
		return 0;
	}
	if (x < x1) {
		cout << x1 - x << endl;
		return 0;
	}
	if (x > x2) {
		cout << x - x2 << endl;
		return 0;
	}
	if (y < y1) {
		cout << y1 - y << endl;
		return 0;
	}
	if (y > y2) {
		cout << y - y2 << endl;
		return 0;
	}
}
