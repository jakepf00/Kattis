#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x = 0, y = 0;
    while (a--) {
        int c, d;
        cin >> c >> d;
        x += c * d;
    }
    while (b--) {
        int c, d;
        cin >> c >> d;
        y += c * d;
    }
    if (x == y) cout << "same" << endl;
    else cout << "different" << endl;
}
