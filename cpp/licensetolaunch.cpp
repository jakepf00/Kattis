#include<bits/stdc++.h>

using namespace std;

int main() {
	int x, min, day = 0, minDay = 0;
	cin >> x >> min;
	x--;
	while (x--) {
		day++;
		int y;
		cin >> y;
		if (y < min) {
			min = y;
			minDay = day;
		}
	}
	cout << minDay << endl;
}
