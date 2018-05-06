#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, factors = 0;
    cin >> x;
    for (int i = 2; i <= sqrt(x); i++) {
        while (x % i == 0) {
            factors++;
            x /= i;
        }
    }
    if (x > 1) factors++;
    cout << factors << endl;
}
