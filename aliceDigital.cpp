#include<bits/stdc++.h>
using namespace std;

int main() {
	int sets;
	cin >> sets;
	while (sets--) {
		int n, m;
		cin >> n >> m;
		vector<vector<int>> thing;
		thing.push_back(vector<int>());
		int total = 0;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x < m) {
				thing.back().push_back(total);
				total = 0;
				thing.push_back(vector<int>());
			}
			else if (x == m) {
				thing.back().push_back(total);
				thing.back().push_back(m);
				total = 0;
			}
			else if (x > m) {
				total += x;
			}
		}
		thing.back().push_back(total);

		int high = 0;
		for (int i = 0; i < thing.size(); i++) {
			if (thing[i].size() < 3) continue;
			int previous = thing[i][0];
			for (int j = 2; j < thing[i].size(); j += 2) {	
				int current = thing[i][j];
				high = max(high, current + previous + m);
				previous = current;
			}
		}
		cout << high << endl;
	}
}
