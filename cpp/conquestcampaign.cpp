#include<bits/stdc++.h>

using namespace std;

bool allTrue(vector<vector<bool>> map) {
    for (int i = 0; i < map.size(); i++) {
        for (int j = 0; j < map[0].size(); j++) {
            if (!map[i][j]) return false;
        }
    }
    return true;
}

vector<vector<bool>> doConquest(vector<vector<bool>> map) {
    vector<vector<bool>> newMap;
    newMap.resize(map.size(), vector<bool>(map[0].size()));
    for (int i = 0; i < map.size(); i++) {
        for (int j = 0; j < map[0].size(); j++) {
            newMap[i][j] = false;
        }
    }
    for (int i = 0; i < map.size(); i++) {
        for (int j = 0; j < map[0].size(); j++) {
            if (map[i][j] == true) {
                newMap[i][j] = true;
                int x = i, y = j;
                x++;
                if (x < map.size()) newMap[x][j] = true;
                x -= 2;
                if (x >= 0) newMap[x][j] = true;
                y++;
                if (y < map[0].size()) newMap[i][y] = true;
                y -= 2;
                if (y >= 0) newMap[i][y] = true;
            }
        }
    }
    return newMap;
}

int main() {
    int columns, rows, number;
    cin >> columns >> rows >> number;
    vector<vector<bool>> map;
    map.resize(columns, vector<bool>(rows));
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            map[i][j] = false;
        }
    }
    while(number--) {
        int one, two;
        cin >> one >> two;
        map[one - 1][two - 1] = true;
    }
    int days;
    for (days = 1; !allTrue(map); days++) {
        map = doConquest(map);
    }
    cout << days << endl;
}
