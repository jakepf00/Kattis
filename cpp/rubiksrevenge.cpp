#include<bits/stdc++.h>
using namespace std;

string row(string state, int r) {
	char temp = state[r*4 + 3];
	state[r*4 + 3] = state[r*4 + 2];
	state[r*4 + 2] = state[r*4 + 1];
	state[r*4 + 1] = state[r*4];
	state[r*4] = temp;
	return state;
}

string col(string state, int c) {
	char temp = state[12 + c];
	state[12 + c] = state[8 + c];
	state[8 + c] = state[4 + c];
	state[4 + c] = state[c];
	state[c] = temp;
	return state;
}

int main() {
	unordered_map<string, int> key;
	key["RRRRGGGGBBBBYYYY"] = 0;
	queue<string> q2;
	string cur = "RRRRGGGGBBBBYYYY";

	while (key[cur] < 6) {
		// Make move, add to q
		for (int i = 0; i < 4; i++) {
			string next;

			// Row turns
			next = row(cur, i);
			if (key.find(next) == key.end()) {
				q2.push(next);
				key[next] = key[cur] + 1;
			}
			next = row(next, i); // Skip half turns
			next = row(next, i);
			if (key.find(next) == key.end()) {
				q2.push(next);
				key[next] = key[cur] + 1;
			}


			// Col turns
			next = col(cur, i);
			if (key.find(next) == key.end()) {
				q2.push(next);
				key[next] = key[cur] + 1;
			}
			next = col(next, i); // Skip half turns
			next = col(next, i);
			if (key.find(next) == key.end()) {
				q2.push(next);
				key[next] = key[cur] + 1;
			}
		}


		cur = q2.front();
		q2.pop();
	}




	unordered_map<string, int> visited;
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	cur = a + b + c + d;
	visited[cur] = 0;

	if (key.find(cur) != key.end()) {
		cout << key[cur] << endl;
		return 0;
	}

	queue<string> q;

	while (true) {
		// Make move, add to q
		for (int i = 0; i < 4; i++) {
			string next;

			// Row turns
			next = row(cur, i);
			if (key.find(next) != key.end()) {
				cout << key[next] + visited[cur] + 1 << endl;
				return 0;
			}
			if (visited.find(next) == visited.end()) {
				q.push(next);
				visited[next] = visited[cur] + 1;
			}
			next = row(next, i); // Skip half turns
			next = row(next, i);
			if (key.find(next) != key.end()) {
				cout << key[next] + visited[cur] + 1 << endl;
				return 0;
			}
			if (visited.find(next) == visited.end()) {
				q.push(next);
				visited[next] = visited[cur] + 1;
			}


			// Col turns
			next = col(cur, i);
			if (key.find(next) != key.end()) {
				cout << key[next] + visited[cur] + 1 << endl;
				return 0;
			}
			if (visited.find(next) == visited.end()) {
				q.push(next);
				visited[next] = visited[cur] + 1;
			}
			next = col(next, i); // Skip half turns
			next = col(next, i);
			if (key.find(next) != key.end()) {
				cout << key[next] + visited[cur] + 1 << endl;
				return 0;
			}
			if (visited.find(next) == visited.end()) {
				q.push(next);
				visited[next] = visited[cur] + 1;
			}
		}


		cur = q.front();
		q.pop();
	}
}
