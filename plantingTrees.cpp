#include<bits/stdc++.h>

using namespace std;

int main() {
	int trees;
	cin >> trees;
	vector<int> days;
	days.resize(trees);
	for(int i = 0; i < trees; i++) {
		cin >> days[i];
	}
	sort(days.rbegin(), days.rend());
	int ans = 0;
	for (int i = 0; i < trees; i++) {
		ans = max((days[i] + i + 2), ans);
	}
	cout << ans << endl;
}
