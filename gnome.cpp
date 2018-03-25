#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int gnomes, first, current;
        cin >> gnomes >> first;
        gnomes--;
        for (int i = 0; i < gnomes; i++) {
            cin >> current;
            first++;
            if (first != current) {
                cout << i + 2 << endl;
                first--;
            }
        }
    }
}
