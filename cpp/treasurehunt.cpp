#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows, columns, j, k, counter;
    cin >> rows >> columns;
    j = 0;
    k = 0;
    counter = 0;

    //char map[rows][columns];
    vector<vector<char>> map;
    map.resize(rows, vector<char>(columns));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> map[i][j];
        }
    }


    for (int i = 0; i < (rows * columns); i++) {
        switch (map[j][k]) {
            case 'N':
                counter++;
                j--;
                if (j < 0) {
                    cout << "Out" << endl;
                    return 0;
                }
                break;
            case 'S':
                counter++;
                j++;
                if (j >= rows) {
                    cout << "Out" << endl;
                    return 0;
                }
                break;
            case 'E':
                counter++;
                k++;
                if (k >= columns) {
                    cout << "Out" << endl;
                    return 0;
                }
                break;
            case 'W':
                counter++;
                k--;
                if (k < 0) {
                    cout << "Out" << endl;
                    return 0;
                }
                break;
            case 'T':
                cout << counter << endl;
                return 0;
                break;
        }
    }

    cout << "Lost" << endl;
}
