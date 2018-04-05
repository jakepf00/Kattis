#include <bits/stdc++.h>

using namespace std;

int main() {
    cout.precision(5);
    int cases;
    cin >> cases;
    while (cases--) {
        double b, p;
        cin >> b >> p;
        cout << fixed << 60 / (p / (b - 1)) << " " << (60 * b) / p << " " << 60 / (p / (b + 1)) << endl;
    }
}
