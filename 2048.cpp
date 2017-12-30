#include <bits/stdc++.h>

using namespace std;

/*
void swipe(vector<int>& row) { // swipes left
    // combine numbers
    for(int i = 0; i < 4; i++) {
        if (row[i] != 0) {
	        for (int j = i + 1; j < 4; j++) {
                if ((row[i] == row[j]) && (row[i] != 0)) {
                    row[i] = 2 * row[i];
                    row[j] = 0;
                    i = j;
                } else if (row[i] != 0) {
                    j++;
                }
            }
        }
    }
    // move numbers left
    for(int x = 0; x < 3; x++) {
        for(int i = 0; i < 3; i++) {
            if ((row[i] == 0) && (row[i+1] != 0)) {
                row[i] = row[i+1];
                row[i+1] = 0;
            }
        }
    }
}
*/

void swipe(vector<int>& v) {
    // remove internal zeros
    vector<int> temp;
    for(auto i : v) {
        if(i != 0) {
            temp.push_back(i);
        }
    }

	for(int i = 1; i < temp.size(); i++) {
        if(temp[i] == temp[i-1]) {
            temp[i-1] *= 2;
            temp[i] = 0;
        }
	}

    vector<int> ans;
    for(auto i : temp) {
        if(i != 0) {
            ans.push_back(i);
        }
    }

    while(ans.size() < 4) {
        ans.push_back(0);
    }

    for(int i = 0; i < 4; i++) {
        v[i] = ans[i];
    }
}

int main() {
    vector<vector<int>> board, ans;
    board.resize(4, vector<int>(4));
    ans.resize(4, vector<int>(4));
    char movement;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> board[i][j];
            ans[i][j] = 0;
        }
    }

    vector<int> row;
    row.resize(4,0);

    cin >> movement;
    switch(movement) {
        case '0': // left
            for(int i = 0; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    row[j] = board[i][j];
                }
                swipe(row);
                for(int j = 0; j < 4; j++) {
                    ans[i][j] = row[j];
                }
            }
            break;
        case '1': // up
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    row[j] = board[j][i];
                }
                swipe(row);
                for (int j = 0; j < 4; j++) {
                    ans[j][i] = row[j];
                }
            }
            break;
        case '2': //right
            for (int i = 0; i < 4; i++) {
                for (int j = 3, k = 0; j >= 0; j--, k++) {
                    row[k] = board[i][j];
                }
                swipe(row);
                for (int j = 3, k = 0; j >= 0; j--, k++) {
                    ans[i][j] = row[k];
                }
            }
            break;
        case '3': //down
            for (int i = 0; i < 4; i++) {
                for (int j = 0, k = 3; j < 4; j++, k--) {
                    row[k] = board[j][i];
                }
                swipe(row);
                for (int j = 0, k = 3; j < 4; j++, k--) {
                    ans[j][i] = row[k];
                }
            }
            break;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << ans[i][j] << " ";
        }
	cout << endl;
    }
    cout << endl;
}
