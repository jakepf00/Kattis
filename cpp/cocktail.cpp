#include<bits/stdc++.h>
using namespace std;

int main() {
	int num, time;
	cin >> num >> time;
	vector<int> potions;
	for (int i = 0; i < num; i++) {
		int potion;
		cin >> potion;
		potions.push_back(potion);
	}
	sort(potions.begin(), potions.end(), greater<int>());
	bool possible = true;
	for (int i = 0; i < num; i++) {
		if (potions[i] - ((num - (i + 1)) * time) <= 0) possible = false;
	}
	if (possible) cout << "YES" << endl;
	else cout << "NO" << endl;
}
