#include<bits/stdc++.h>

using namespace std;

bool checkLegal(char board[5][5], int i, int j) {
    i--;
    j -= 2;
    if (i >= 0 && j >= 0) {
        if (board[i][j] == 'k') return false;
    }
    i += 2;
    if (i < 5 && j >= 0) {
        if (board[i][j] == 'k') return false;
    }
    j++;
    i -= 3;
    if (i >= 0 && j >= 0) {
        if (board[i][j] == 'k') return false;
    }
    i += 4;
    if (i < 5 && j >= 0) {
        if (board[i][j] == 'k') return false;
    }
    j += 2;
    if (i < 5 && j < 5) {
        if (board[i][j] == 'k') return false;
    }
    i -= 4;
    if (i >= 0 && j < 5) {
        if (board[i][j] == 'k') return false;
    }
    j++;
    i++;
    if (i >= 0 && j < 5) {
        if (board[i][j] == 'k') return false;
    }
    i += 2;
    if (i < 5 && j < 5) {
        if (board[i][j] == 'k') return false;
    }
    return true;
}

int main() {
    char board[5][5];
    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> board[i][j];
            if (board[i][j] == 'k') count++;
        }
    }
    if (count != 9) {
        cout << "invalid" << endl;
        return 0;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (board[i][j] == 'k') {
                if (!checkLegal(board, i, j)) {
                    cout << "invalid" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "valid" << endl;
}
