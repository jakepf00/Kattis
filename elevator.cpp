#include<bits/stdc++.h>
using namespace std;

int main() {
	int f, s, g, u, d;
	cin >> f >> s >> g >> u >> d;
	vector<int> floors;
	floors.resize(f + 1);
	for (int i = 0; i <= f; i++) floors[i] = -1;	
	floors[s] = 0;
	queue<int> check;
	check.push(s);

	vector<int> adj = {u,-d};

	while(!check.empty()) {
		int curr = check.front();
		check.pop();

		//cout << "checking " << curr << endl;

		for(auto i : adj) {
			int next = curr + i;
			//cout << "from here, visiting " << next << endl;

			if(next < 1 || next > f) continue;
			if(floors[next] > -1) continue;

			floors[next] = floors[curr] + 1;
			check.push(next);
		}

	}
	
	if(floors[g] < 0) cout << "use the stairs" << endl;
	else cout << floors[g] << endl;
}
