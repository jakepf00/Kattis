#include<bits/stdc++.h>

using namespace std;

int main() {
	bool days[366] = { false };
	int events;
	cin >> events;
	while (events--) {
		int a, b;
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			days[i] = true;
		}
	}
	int ans = 0;
	for (int i = 0; i < 366; i++) {
		if (days[i]) {
			ans++;
		}
	}
	cout << ans << endl;
}
