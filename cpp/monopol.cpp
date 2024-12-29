#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double p = 0;
    while (n--) {
        double a;
        cin >> a;
        p += (6 - abs(a - 7)) / 36;
    }
    cout << p << endl;
}
