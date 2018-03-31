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
    int houses, cables;
    cin >> houses >> cables;
    vector<int> d (houses + 1, -1);
    while (cables--) {
        int a, b;
        cin >> a >> b;
        join(d, a, b);
    }

    bool connected = true;
    for (int i = 2; i < houses + 1; i++) {
        if (find(d, i) != find(d, 1)) {
            connected = false;
            cout << i << endl;
        }
    }
    if (connected) {
        cout << "Connected" << endl;
    }
}
