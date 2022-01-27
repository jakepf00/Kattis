#include<bits/stdc++.h>
using namespace std;

int main() {
    double p, a, b, c, d;
    int n;
    cin >> p >> a >> b >> c >> d >> n;
    double maxDiff = 0;
    double maxPoint = 0;
    for(int i = 1; i <= n; i++) {
        double price = p * (sin(a * i + b) + cos(c * i + d) + 2);
        if (price > maxPoint) maxPoint = price;
        else if (maxPoint - price > maxDiff) maxDiff = maxPoint - price;
    }
    cout << fixed << setprecision(8) << maxDiff << endl;
}
