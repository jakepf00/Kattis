#include<bits/stdc++.h>

using namespace std;

int main() {
	double x;
	cin >> x;
	x *= 5280000;
	x /= 4854;
	cout << (long long) round(x) << endl;
}
