#include<bits/stdc++.h>
using namespace std;

int main() {
    int l, k, s;
    cin >> l >> k >> s;
    map<int, pair<int, int>> times;
    while (l--) {
        int a;
        char b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        int seconds = f - '0';
        seconds += (e - '0') * 10;
        seconds += (c - '0') * 60;
        seconds += (b - '0') * 600;
        if (times.find(a) == times.end()) {
            times[a].first = 1;
            times[a].second = seconds;
        }
        else {
            times[a].first++;
            times[a].second += seconds;
        }
    }
    vector<pair<int, int>> finishers;
    for (auto i : times) {
        if (i.second.first == k) {
            finishers.push_back(make_pair(i.second.second, i.first));
        }
    }
    sort(finishers.begin(), finishers.end());
    for (auto i : finishers) {
        cout << i.second << endl;
    }
}
