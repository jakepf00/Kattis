#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m && (n != 0 && m != 0)) {
        vector<pair<int,int>> calls;
        while (n--) {
            int source, dest, start, duration;
            cin >> source >> dest >> start >> duration;
            calls.push_back(make_pair(start, start + duration));
        }
        while (m--) {
            int start, duration, ans = 0;
            cin >> start >> duration;
            int end = start + duration;
            for (auto i : calls) {
                if (i.first >= start && i.first < end) ans++;
                else if (i.second > start && i.second < end) ans++;
                else if (i.first < start && i.second >= end) ans++;
            }
            cout << ans << endl;
        }
    }
}
