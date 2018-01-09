#include<bits/stdc++.h>

using namespace std;

int main() {
    int cases, width, height;
    vector<vector<char>> image;
    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> width >> height;
        image.resize(width, vector<char>(height));
        for (int j = width - 1; j >= 0; j--) {
            for (int k = height - 1; k >= 0; k--) {
                cin >> image[j][k];
            }
        }

        cout << "Test " << i + 1 << endl;
        for (int j = 0; j < width; j++) {
            for (int k = 0; k < height; k++) {
                cout << image[j][k];
            }
        cout << endl;
        }
    }
}
