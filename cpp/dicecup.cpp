#include <iostream>

using namespace std;

int main() {
    int d1;
    int d2;

    cin >> d1 >> d2;

    if (d1 > d2) {
        int temp;
        temp = d1;
        d1 = d2;
        d2 = temp;
    }

    for (int i = d1 + 1; i < d2 + 2; i++) {
        cout << i << endl;
    }


    return 0;
}
