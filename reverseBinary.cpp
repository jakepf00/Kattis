#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a;
    b = 0;

    while (a != 0) {
        b = b * 2;
        if (a % 2 == 1) {
            b++;
        }
        a = a / 2;
    }

    cout << b << endl;

    return 0;
}
