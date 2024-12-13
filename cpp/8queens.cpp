#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<bool>> valid(8, vector<bool>(8, true));
    int numQueens = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char a;
            cin >> a;
            if (a == '*') {
                if (!valid[i][j]) {
                    cout << "invalid" << endl;
                    return 0;
                }
                numQueens++;
                for (int k = j + 1; k < 8; k++) valid[i][k] = false;
                for (int k = i + 1; k < 8; k++) valid[k][j] = false;
                for (int k = i + 1, l = j + 1; k < 8 && l < 8; k++, l++) valid[k][l] = false;
                for (int k = i + 1, l = j - 1; k < 8 && l >= 0; k++, l--) valid[k][l] = false;
            }
        }
    }
    if (numQueens == 8) cout << "valid" << endl;
    else cout << "invalid" << endl;
}
