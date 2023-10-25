#include<bits/stdc++.h>
using namespace std;

int main() {
	double a;
	cin >> a;
	cout << fixed << setprecision(5) << (100.0 - a) / a + 1 << endl << a / (100.0 - a) + 1 << endl;
}
