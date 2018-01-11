#include<bits/stdc++.h>

using namespace std;

int main() {
    int width, height;
    int spaces[5] = { 0 };
    cin >> width >> height;
    char map[width][height];
    int cars = 0;
    bool done = false;

    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < width - 1; i++) {
        for (int j = 0; j < height - 1; j++) {
            if (map[i][j] == '#')         done = true;
            if (map[i][j + 1] == '#')     done = true;
            if (map[i + 1][j] == '#')     done = true;
            if (map[i + 1][j + 1] == '#') done = true;
            if (map[i][j] == 'X')         cars++;
            if (map[i][j + 1] == 'X')     cars++;
            if (map[i + 1][j] == 'X')     cars++;
            if (map[i + 1][j + 1] == 'X') cars++;

            if (!done) {
                spaces[cars]++;
            }
            cars = 0;
            done = false;
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << spaces[i] << endl;
    }
}
