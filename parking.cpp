#include<bits/stdc++.h>

using namespace std;

int main() {
	int a, b, c, in[3], out[3];
	cin >> a >> b >> c >> in[0] >> out[0] >> in[1] >> out[1] >> in[2] >> out[2];
	b *= 2;
	c *= 3;
	int numTrucks = 0, ans = 0;
	for (int i = 0; i <= 100; i++) {
		if (i == in[0]) {
			numTrucks++;
		}
		if (i == in[1]) {
			numTrucks++;
		}
		if (i == in[2]) {
			numTrucks++;
		}
		if (i == out[0]) {
			numTrucks--;
		}
		if (i == out[1]) {
			numTrucks--;
		}
		if (i == out[2]) {
			numTrucks--;
		}

		if (numTrucks == 1) ans += a;
		else if (numTrucks == 2) ans += b;
		else if (numTrucks == 3) ans += c;	
	}
	cout << ans << endl;
}
