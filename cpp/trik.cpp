#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    a = 1;
    b = -1;
    c = -1;
    string swaps;
    cin >> swaps;

    for (int i = 0; i < swaps.length(); i++) {
        if (swaps[i] == 'A') {
            if (a != b) {
                a *= -1;
                b *= -1;
            }
        }
        else if (swaps[i] == 'B') {
            if (b != c) {
                b *= -1;
                c *= -1;
            }
        }
        else {
            if (a != c) {
                a *= -1;
                c *= -1;
            }
        }
    }

    if (a == 1) cout << 1 << endl;
    else if (b == 1) cout << 2 << endl;
    else cout << 3 << endl;

    return 0;
}
