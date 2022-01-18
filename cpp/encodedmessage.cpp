#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        string a;
        cin >> a;
        int x = sqrt(a.size());
        for (int i = x - 1; i >= 0; i--) {
            for (int j = 0; j < x; j++) {
                int location = i + (j * x);
                cout << a[location];
            }
        }
        cout << endl;
    }
}
