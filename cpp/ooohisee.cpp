#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<vector<char>> map(a);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            char c;
            cin >> c;
            map[i].push_back(c);
        }
    }

    int locations = 0;
    int x = -1, y = -1;

    for (int i = 1; i < a - 1; i++) {
        for (int j = 1; j < b - 1; j++) {
            if (map[i][j] == '0' && map[i-1][j] == 'O' && map[i-1][j-1] == 'O' && map[i-1][j+1] == 'O' && map[i+1][j] == 'O' && map[i+1][j-1] == 'O' && map[i+1][j+1] == 'O' && map[i][j-1] == 'O' && map[i][j+1] == 'O') {
                locations++;
                x = i + 1;
                y = j + 1;
            }
        }
    }

    if (locations == 0) cout << "Oh no!" << endl;
    else if (locations == 1) cout << x << " " << y << endl;
    else cout << "Oh no! " << locations << " locations" << endl;
}
