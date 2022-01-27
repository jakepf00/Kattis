#include<bits/stdc++.h>
using namespace std;

int main() {
    double x, y, numShields;
    cin >> x >> y >> numShields;
    while (numShields--) {
        double bottom, top, factor;
        cin >> bottom >> top >> factor;
        y -= top - bottom;
        y += (top - bottom) * factor;
    }
    cout << fixed << setprecision(8) << x / y << endl;
}
