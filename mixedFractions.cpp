#include <iostream>

using namespace std;

int main() {
    int numerator, denominator, whole, numerator2;

    while (cin >> numerator >> denominator) {
        whole = 0;
        if ((numerator == 0) && (denominator == 0)) break;
        else {
            whole = numerator / denominator;
            numerator2 = numerator - whole * denominator;
            cout << whole << " " << numerator2 << " / " << denominator << endl;
        }
    }

    return 0;
}
