#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases, x;
    cin >> cases;
    vector<int> stores;
    while (cases--) {
        stores.clear();
        cin >> x;
        stores.resize(x);
        for (int i = 0; i < x; i++) {
            cin >> stores[i];
        }
        sort(stores.begin(), stores.end());
        cout << (stores[x - 1] - stores[0]) * 2 << endl;
    }
}
