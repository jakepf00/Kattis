#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m, q;
	cin >> n >> m >> q;
	map<int, string> people;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		people[i] = temp;
	}
	while (q--) {
		int num;
		char response;
		cin >> num >> response;
		vector<int> remove;
		for (auto i = people.begin(); i != people.end(); i++) {
			if (i->second[num - 1] != response) {
				remove.push_back(i->first);
			}
		}
		for (auto i : remove) {
			people.erase(i);
		}
	}
	if (people.size() > 1) cout << "ambiguous" << endl << people.size() << endl;
	else cout << "unique" << endl << people.begin()->first + 1 << endl;
}
