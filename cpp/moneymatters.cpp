#include <bits/stdc++.h>

using namespace std;

int find(vector<int>& d, int a) {
    if (d[a] == -1) return a;
    return d[a] = find(d, d[a]);
}
void join(vector<int>& d, int a, int b) {
    a = find(d, a);
    b = find(d, b);
    if (a == b) return;
    d[a] = b;
}

int main() {
    int people, connections;
    cin >> people >> connections;
    vector<int> d(people, -1);
    vector<int> moneys(people);
    for (int i = 0; i < people; i++) cin >> moneys[i];
    while (connections--) {
        int a, b;
        cin >> a >> b;
        join(d, a, b);
    }
    for (int i = 0; i < people; i++) {
        int q = find(d, i);
    }
    vector<int> totals(people, 0);
    for (int i = 0; i < people; i++) {
        if (d[i] == -1) totals[i] += moneys[i];
        else totals[d[i]] += moneys[i];
    }
    for (int i = 0; i < people; i++) {
        if (totals[i] != 0) {
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
    }
    cout << "POSSIBLE" << endl;
}
