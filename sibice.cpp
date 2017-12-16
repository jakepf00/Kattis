#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int cases;
    double a, b, c, d;
    cin >> cases >> a >> b;
    c = sqrt((a * a) + (b * b));
    for (int i = 0; i < cases; i++) {
        cin >> d;
        if (d <= c) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    }
    return 0;
}
