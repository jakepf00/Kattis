#include<bits/stdc++.h>

using namespace std;

int main() {
	int cases;
	cin >> cases;
	while (cases--) {
		int gSize, mSize;
		cin >> gSize >> mSize;
		vector<int> gArmy, mArmy;

		while (gSize--) {
			int temp;
			cin >> temp;
			gArmy.push_back(temp);
		}
		while (mSize--) {
			int temp;
			cin >> temp;
			mArmy.push_back(temp);
		}

		if (gArmy.size() > 1) {
			sort(gArmy.rbegin(), gArmy.rend());
		}
		if (mArmy.size() > 1) {
			sort(mArmy.rbegin(), mArmy.rend());
		}

		if (mArmy[0] > gArmy[0]) {
			cout << "MechaGodzilla" << endl;
		} else {
			cout << "Godzilla" << endl;
		}
	}
}
