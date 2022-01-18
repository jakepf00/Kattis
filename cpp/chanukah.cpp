#include<bits/stdc++.h>

using namespace std;

int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		int num, days;
		cin >> num >> days;
		int ans = 0;
		for (int i = 1; i <= days; i++) {
			ans += i;
		}
		ans += days;
		cout << num << " " << ans << endl;;
	}
}
