#include <bits/stdc++.h>

using namespace std;

int main() {
    double atBats, numerator;
    int j, bases;
    cin >> atBats;
    j = atBats;
    numerator = 0;

    for (int i = 0; i < j; i++) {
        cin >> bases;
        if (bases == -1) {
            atBats--;
        } else {
            numerator += bases;
        }
    }

    cout << numerator / atBats << endl;
}
