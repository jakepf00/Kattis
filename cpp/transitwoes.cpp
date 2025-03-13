#include<bits/stdc++.h>
using namespace std;

int main() {
    int s, t, n;
    cin >> s >> t >> n;
    vector<int> walk, bus, interval;
    for (int i = 0; i <= n; i++) {
        int a;
        cin >> a;
        walk.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        bus.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        interval.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        s += walk[i];
        if (s % interval[i] != 0) s += interval[i] - (s % interval[i]);
        s += bus[i];
    }
    s += walk[n];

    if (s <= t) cout << "yes" << endl;
    else cout << "no" << endl;
}
