#include<bits/stdc++.h>
using namespace std;

int main() {
	int cases;
	cin >> cases;
	for (int a = 0; a < cases; a++) {
		string place;
		cin >> place;
		int board[8][8];
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				board[i][j] = 9999;
			}
		}
		vector<tuple<int, int, int>> check;
		check.push_back(make_tuple(place[1]-'1', place[0]-'a', 0));
		while (!check.empty()) {
			tuple<int, int, int> current = check.back();
			check.pop_back();
			int row = get<0>(current);
			int col = get<1>(current);
			int val = get<2>(current);
			if (val < board[row][col]) {
				board[row][col] = val;
				if (row + 2 < 8 && col - 1 >= 0) check.push_back(make_tuple(row + 2, col - 1, val + 1));
				if (row + 2 < 8 && col + 1 < 8) check.push_back(make_tuple(row + 2, col + 1, val + 1));
				if (row + 1 < 8 && col + 2 < 8) check.push_back(make_tuple(row + 1, col + 2, val + 1));
				if (row - 1 >= 0 && col + 2 < 8) check.push_back(make_tuple(row - 1, col + 2, val + 1));
				if (row - 2 >= 0 && col - 1 >= 0) check.push_back(make_tuple(row - 2, col - 1, val + 1));
				if (row - 2 >= 0 && col + 1 < 8) check.push_back(make_tuple(row - 2, col + 1, val + 1));
				if (row + 1 < 8 && col - 2 >= 0) check.push_back(make_tuple(row + 1, col - 2, val + 1));
				if (row - 1 >= 0 && col - 2 >= 0) check.push_back(make_tuple(row - 1, col - 2, val + 1));
			}
		}
		int maxVal = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				maxVal = max(maxVal, board[i][j]);
			}
		}
		cout << maxVal << " ";
		for (int j = 7; j >= 0; j--) {
			for (int i = 0; i < 8; i++) {
				string current = "" + ('a' + j) + ('1' + i);
				if (board[j][i] == maxVal) {
					cout << static_cast<char>('a' + i) << static_cast<char>('1' + j) << " ";
				}
			}
		}
		cout << endl;
	}
}
