#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        double a, b, c;
        cin >> a >> b >> c;
        if ((a + b == c) || (a - b == c) || (b - a == c) || (a * b == c) || (a / b == c) || (b / a == c)) {
            cout << "Possible" << endl;
        }
        else {
            cout << "Impossible" << endl;
        }
    }
}
