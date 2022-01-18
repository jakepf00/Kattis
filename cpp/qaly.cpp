#include<bits/stdc++.h>

using namespace std;

int main() {
	cout.precision(9);
	int x;
	double total = 0;
	cin >> x;
	while (x--) {
		double a, b;
		cin >> a >> b;
		total += (a * b);
	}
	cout << total << endl;
}
