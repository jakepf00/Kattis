#include<bits/stdc++.h>
using namespace std;

int main() {
    long double v, a, t;
    cin >> v >> a >> t;
    cout << fixed << setprecision(8) << ((v * t) + (0.5 * a * t * t)) << endl;
}
