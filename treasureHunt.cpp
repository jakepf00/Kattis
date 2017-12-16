#include <iostream>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;

    char map[200][200] = 'A';

    for (int i = 0; i < rows; i++) {
        for (int j = 0; i < columns; j++) {
            char temp;
            cin >> temp;
            map[i][j] = temp;
            cout << map[i][j];
        }
        cout << endl;
    }

    return 0;
}
