#include <bits/stdc++.h>

using namespace std;

int main() {
    int total;
    cin >> total;

    cout << total << ":" << endl;
    for (int i = 2; i < total; i++) {
        int j = i - 1;
        if ((total % (i + j) == i) || (total % (i + j) == 0)) {
            cout << i << "," << j << endl;
        }
        if (total % i == 0) {
            cout << i << "," << i << endl;
        }
    }
}
