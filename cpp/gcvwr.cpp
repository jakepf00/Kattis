#include<bits/stdc++.h>
using namespace std;

int main() {
	double a, b;
	int c;
	cin >> a >> b >> c;
	int max = (a - b) * 0.9;
	while (c--) {
		double d;
		cin >> d;
		max -= d;
	}
	cout << max << endl;
}
