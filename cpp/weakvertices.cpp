#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n > 0) {
        vector<vector<int>> vert;
        vert.resize(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> vert[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            bool isTri = false;
            for (int j = 0; j < n; j++) {
                if (vert[i][j]) {
                    for (int k = 0; k < n; k++) {
                        if (k == i) continue;
                        if (vert[i][k] && vert[j][k]) {
                            isTri = true;
                            break;
                        }
                    }
                }
            }
            if (!isTri) {
                cout << i << " ";
            }
        }

        cout << endl;
        cin >> n;
    }
}
