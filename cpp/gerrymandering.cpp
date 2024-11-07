#include<bits/stdc++.h>
using namespace std;

int main() {
    int p, d;
    double v = 0;
    cin >> p >> d;
    vector<pair<int, int>> districts(d, make_pair(0, 0));
    while (p--) {
        int a, b;
        cin >> d >> a >> b;
        districts[d - 1].first += a;
        districts[d - 1].second += b;
        v += a;
        v += b;
    }
    double wa = 0, wb = 0;
    for (auto i : districts) {
        if (i.first > i.second) {
            int waa = i.first - ((i.first + i.second) / 2 + 1);
            int wbb = i.second;
            cout << "A " << waa << " " << wbb << endl;
            wa += waa;
            wb += wbb;
        }
        else {
            int waa = i.first;
            int wbb = i.second - ((i.second + i.first) / 2 + 1);
            cout << "B " << waa << " " << wbb << endl;;
            wa += waa;
            wb += wbb;
        }
    }
    cout << fixed << setprecision(10) << abs((wa - wb) / v) << endl;
}
