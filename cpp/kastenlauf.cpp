#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n += 2;
        vector<pair<int, int>> coords(n);
        vector<bool> visited(n, false);
        for (int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            coords[i] = make_pair(a, b);
        }
        queue<int> bfs;
        bfs.push(0);
        visited[0] = true;
        while (bfs.size() > 0) {
            int cur = bfs.front();
            bfs.pop();
            for (int i = 0; i < n; i++) {
                if (visited[i]) continue;
                int dist1 = abs(coords[i].first - coords[cur].first);
                int dist2 = abs(coords[i].second - coords[cur].second);
                int dist = dist1 + dist2;
                if (dist <= 1000) {
                    visited[i] = true;
                    bfs.push(i);
                    if (i == n - 1) break;
                }
            }
        }
        if (visited[n - 1]) cout << "happy" << endl;
        else cout << "sad" << endl;
    }
}
