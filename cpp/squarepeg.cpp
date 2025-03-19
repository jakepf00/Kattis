#include<bits/stdc++.h>
using namespace std;

int main() {
    long double l, r;
    cin >> l >> r;
    l /= 2;
    l = sqrt((l * l) + (l * l));
    if (l > r) cout << "nope" << endl;
    else cout << "fits" << endl;
}
