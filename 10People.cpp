#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> thing;

void dfs(int i, int j, int from, int to) {
	if (i >= 0 && j >= 0 && i < thing.size() && j < thing[i].size()) {
		if (thing[i][j] == from) {
			thing[i][j] = to;
			dfs(i + 1, j, from, to);
			dfs(i - 1, j, from, to);
			dfs(i, j + 1, from, to);
			dfs(i, j - 1, from, to);
		}
	}
}

int main() {
	int rows, cols;
	cin >> rows >> cols;
	thing.resize(rows, vector<int>(cols));
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			char q;
			cin >> q;
			thing[i][j] = (q - '0');
		}
	}

	vector<vector<int>> haha = thing;
	int num = 2;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if(thing[i][j] == 0 || thing[i][j] == 1) {
				dfs(i, j, thing[i][j], num);
				num++;
			}
		}
	}

	/*
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << thing[i][j] << '\t';
		}
		cout << endl;
	}
	*/

	int cases;
	cin >> cases;
	while (cases--) {
		int r1, c1, r2, c2;
		cin >> r1 >> c1 >> r2 >> c2;
		r1--; c1--; r2--; c2--;
		if(thing[r1][c1] == thing[r2][c2]) {
			if(haha[r1][c1] == 0) cout << "binary" << endl;
			else cout << "decimal" << endl;
		}
		else cout << "neither" << endl;
	}
}
