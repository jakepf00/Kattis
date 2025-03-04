#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 1, b;
    cin >> b;
    while (b > 0) {
        if (b % 10 > 0) a *= (b % 10);
        b /= 10;
        if (b == 0 && a > 9) {
            b = a;
            a = 1;
        }
    }
    cout << a << endl;
}
