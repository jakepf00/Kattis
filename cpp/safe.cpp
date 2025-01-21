#include<bits/stdc++.h>
using namespace std;

char inc(char a) {
	return ((a - '0') + 1) % 4 + '0';
}

string move(string a, int r, int c) {
	a[r*3] = inc(a[r*3]);
	a[r*3 + 1] = inc(a[r*3 + 1]);
	a[r*3 + 2] = inc(a[r*3 + 2]);

	a[c] = inc(a[c]);
	a[c + 3] = inc(a[c + 3]);
	a[c + 6] = inc(a[c + 6]);

	// r-c got double counted, need to decrement one
	a[r * 3 + c] = inc(a[r * 3 + c]);
	a[r * 3 + c] = inc(a[r * 3 + c]);
	a[r * 3 + c] = inc(a[r * 3 + c]);

	return a;
}

int main() {
	string a;
	for (int i = 0; i < 9; i++) {
		char b;
		cin >> b;
		a.push_back(b);
	}

	unordered_map<string, int> visited;
	queue<string> q;
	q.push(a);

	while (!q.empty()) {
		string cur = q.front();
		q.pop();

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				string next = move(cur, i, j);
				if (visited.find(next) == visited.end()) {
					visited[next] = visited[cur] + 1;
					q.push(next);
				}
			}
		}
	}

	if (visited.find("000000000") != visited.end()) cout << visited["000000000"] << endl;
	else cout << -1 << endl;
}
