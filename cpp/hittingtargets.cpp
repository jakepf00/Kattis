#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<double>> rect, circ;
    while (n--) {
        string a;
        cin >> a;
        if (a == "rectangle") {
            vector<double> b;
            double c, d, e, f;
            cin >> c >> d >> e >> f;
            b.push_back(c);
            b.push_back(d);
            b.push_back(e);
            b.push_back(f);
            rect.push_back(b);
        }
        else {
            vector<double> b;
            int c, d, e;
            cin >> c >> d >> e;
            b.push_back(c);
            b.push_back(d);
            b.push_back(e);
            circ.push_back(b);
        }
    }
    cin >> n;
    while (n--) {
        double x, y;
        cin >> x >> y;
        int ans = 0;
        for (auto i : rect) {
            if (i[0] <= x && i[1] <= y && i[2] >= x && i[3] >= y) {
                ans++;
            }
        }
        for (auto i : circ) {
            if (sqrt((x - i[0]) * (x - i[0]) + (y - i[1]) * (y - i[1])) <= i[2]) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
