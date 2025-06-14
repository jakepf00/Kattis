#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b, c, d;
	n--;
	cin >> a >> b;
	c = a;
	d = b;
	while (n--) {
		int e, f;
		cin >> e >> f;
		if (e < a) a = e;
		if (e > c) c = e;
		if (f < b) b = f;
		if (f > d) d = f;
	}
	cout << 2 * (c - a + 2) + 2 * (d - b + 2) << endl;
}
