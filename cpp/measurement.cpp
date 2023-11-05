#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<long double> units = { 1, 1000, 12, 3, 22, 10, 8, 3 };
	long double measurement;
	string a, temp, b;
	cin >> measurement >> a >> temp >> b;
	int a1, b1;
	if (a == "thou" || a == "th") a1 = 0;
	if (a == "inch" || a == "in") a1 = 1;
	if (a == "foot" || a == "ft") a1 = 2;
	if (a == "yard" || a == "yd") a1 = 3;
	if (a == "chain" || a == "ch") a1 = 4;
	if (a == "furlong" || a == "fur") a1 = 5;
	if (a == "mile" || a == "mi") a1 = 6;
	if (a == "league" || a == "lea") a1 = 7;
	
	if (b == "thou" || b == "th") b1 = 0;
	if (b == "inch" || b == "in") b1 = 1;
	if (b == "foot" || b == "ft") b1 = 2;
	if (b == "yard" || b == "yd") b1 = 3;
	if (b == "chain" || b == "ch") b1 = 4;
	if (b == "furlong" || b == "fur") b1 = 5;
	if (b == "mile" || b == "mi") b1 = 6;
	if (b == "league" || b == "lea") b1 = 7;

	while (a1 != b1) {
		if (a1 > b1) {
			measurement *= units[a1];
			a1--;
		}
		else {
			a1++;
			measurement /= units[a1];
		}
	}
	cout << fixed << setprecision(10) << measurement << endl;
}
