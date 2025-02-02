#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    set<pair<int, int>> a;
    while (k--) {
        int b, c;
        cin >> b >> c;
        a.insert(make_pair(b, c));
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            pair<int, int> e(i, j);
            if (a.find(e) != a.end()) cout << '*';
            else cout << '.';
        }
        cout << endl;
    }
}
