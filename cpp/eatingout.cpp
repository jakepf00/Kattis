#include<bits/stdc++.h>
using namespace std;

int main() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int d = a + b - m;
    if (d <= 0) {
        cout << "possible" << endl;
        return 0;
    }
    int e = m - d;
    if (c > e) {
        cout << "impossible" << endl;
        return 0;
    }
    cout << "possible" << endl;
}
