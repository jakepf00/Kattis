#include<bits/stdc++.h>

using namespace std;

int main() {
	int r, c, zr, zc;
	cin >> r >> c >> zr >> zc;
	char board[r][c];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < r * zr; i++) {
		for (int j = 0; j < c * zc; j++) {
			cout << board[i / zr][j / zc];
		}
		cout << endl;
	}
}
