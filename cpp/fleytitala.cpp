#include<bits/stdc++.h>
using namespace std;

int main() {
    long double d, k;
    cin >> d >> k;
    long double total = d;
    if (k < 10000) {
        while (k--) {
            d /= 2;
            total += d;
        }
    }
    else (total *= 2);
    cout << total << endl;
}
