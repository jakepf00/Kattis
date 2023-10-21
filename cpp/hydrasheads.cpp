#include<bits/stdc++.h>
using namespace std;

int main() {
	int heads, tails;
	while (cin >> heads >> tails && ((heads > 0) || (tails > 0))) {
		int originalTails = tails;
		int moves = 0;
		if (tails % 2 == 0) {
			moves += tails / 2;
			heads += tails / 2;
		}
		else {
			tails++;
			moves++;
			moves += tails / 2;
			heads += tails / 2;
		}
		if (heads % 2 == 0) {
			moves += heads / 2;
		}
		else {
			if (originalTails == 0) {
				cout << -1 << endl;
				continue;
			}
			heads--;
			moves += heads / 2;
			moves += 4;
		}
		cout << moves << endl;
	}
}
