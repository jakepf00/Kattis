#include<bits/stdc++.h>

using namespace std;

int main() {
	int x;
	cin >> x;
	vector<string> names;
	while (x--) {
		string name;
		cin >> name;
		names.push_back(name);
	}
	vector<string> ascending = names;
	sort(ascending.begin(), ascending.end());
	vector<string> descending = names;
	sort(descending.rbegin(), descending.rend());
	if (names == ascending) cout << "INCREASING" << endl;
	else if (names == descending) cout << "DECREASING" << endl;
	else cout << "NEITHER" << endl;
}
