#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> y;
    vector<int> x1;
    vector<int> x2;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        int i = 0;
        while (i < y.size() && a > y[i]) {
            i++;
        }
        i;
        y.insert(y.begin() + i, a);
        x1.insert(x1.begin() + i, b);
        x2.insert(x2.begin() + i, c);
    }

    int ans = 0;
    vector<int> floor(10000);
    for (int i = 0; i < y.size(); i++) {
        ans += y[i] - floor[x1[i]];
        ans += y[i] - floor[x2[i] - 1];
        for (int j = x1[i]; j < x2[i]; j++) {
            floor[j] = y[i];
        }
    }

    cout << ans << endl;
}
