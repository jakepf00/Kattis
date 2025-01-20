#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	vector<pair<int,string>> probs;
	for (int i = 0; i < a; i++) {
		string c;
		cin >> c;
		probs.push_back(make_pair(0,c));
	}
	while (b--) {
		for (int i = 0; i < a; i++) {
			int c;
			cin >> c;
			probs[i].first += c;
		}
	}
	sort(probs.rbegin(), probs.rend());
	cout << probs[0].second << endl;
}
