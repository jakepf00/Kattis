#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	int time = 0;
	int previousLight = 0;
	while (n--) {
		int d, r, g;
		cin >> d >> r >> g;
		time += d - previousLight;
		previousLight = d;
		if ((time % (r + g)) < r) time += (r - (time % (r + g)));
	}
	time += l - previousLight;
	cout << time << endl;
}
