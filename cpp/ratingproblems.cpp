#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    double min = 0, max = 0;
    int z = x - y;

    for (int i = 0; i < y; i++) {
        double num;
        cin >> num;
        min += num;
        max += num;
    }
    for (int i = 0; i < z; i++) {
        min -= 3;
        max += 3;
    }
    min /= x;
    max /= x;
    cout << fixed << setprecision(6) << min << " " << fixed << setprecision(6) << max << endl;
}
