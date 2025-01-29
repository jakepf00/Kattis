#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    while (a.length() > 0 && b.length() > 0) {
        if (a[0] > b[0]) {
            cout << b[0];
            b.erase(0, 1);
        }
        else {
            cout << a[0];
            a.erase(0, 1);
        }
    }
    if (a.length() > 0) cout << a << endl;
    else cout << b << endl;
}
