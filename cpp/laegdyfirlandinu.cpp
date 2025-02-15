#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            int b = a[i][j];
            if (a[i-1][j] > b && a[i+1][j] > b && a[i][j-1] > b && a[i][j+1] > b) {
                cout << "Jebb" << endl;
                return 0;
            }
        }
    }
    cout << "Neibb" << endl;
}
