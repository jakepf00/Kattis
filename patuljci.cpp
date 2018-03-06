#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> dwarves(9);
    int a, b, total = 0;
    for (int i = 0; i < 9; i++) {
        cin >> dwarves[i];
    }
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            for (int k = 0; k < 9; k++) {
                if ((k == i) || (k == j)) continue;
                else total += dwarves[k];
            }
            if (total == 100) {
                a = i;
                b = j;
            }
            total = 0;
        }
    }
    for (int i = 0; i < 9; i++) {
        if ((i == a) || (i == b)) continue;
        else cout << dwarves[i] << endl;
    }
}
