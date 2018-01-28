#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, cases;
    cin >> cases;
    a = 0;
    b = 1;
    for (int i = 1; i < cases; i++) {
        int temp = a;
        a = b;
        b += temp;
    }
    cout << a << " " << b << endl;
    return 0;
}
