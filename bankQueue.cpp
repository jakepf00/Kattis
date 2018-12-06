#include<bits/stdc++.h>

using namespace std;

int main() {
	int numPeople, bankClose;
	cin >> numPeople >> bankClose;
	vector<int> best(bankClose+1, 0);
	for (int i = 0; i < numPeople; i++) {
		int money, time;
		cin >> money >> time;
		for (int j = time; j >= 0; j--) {
			if (money > best[j]) {
				swap(money, best[j]);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < best.size(); i++) {
		ans += best[i];
	}
	cout << ans << endl;
}
