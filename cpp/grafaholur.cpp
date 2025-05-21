#include<bits/stdc++.h>
using namespace std;

int main() {
	long double n, h, x, m, y;
	cin >> n >> h >> x >> m >> y;
	long double a = x / n / h;
	long double b = y / (a * m);
	cout << fixed << setprecision(9) << b << endl;
}
