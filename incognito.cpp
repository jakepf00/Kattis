#include<bits/stdc++.h>

using namespace std;

int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		int x;
		cin >> x;
		map<string, int> thing;
		string garbo, thing2;
		while (x--) {
			cin >> garbo >> thing2;
			thing[thing2]++;
		}
		int ans = 1;
		for (auto i : thing) {
			ans *= (i.second + 1);
		}
		ans--;
		cout << ans << endl;
	}
}
