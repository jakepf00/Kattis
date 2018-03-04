#include <bits/stdc++.h>

using namespace std;

int main() {
    int places;
    cin >> places;
    map<string, string> thingy;
    vector<string> keys;
    for (int i = 0; i < places; i++) {
        string a, b;
        cin >> a >> b;
        if (thingy.count(a) == 0) {
            keys.push_back(a);
            thingy[a] = b;
        }
    }
    int i = 0;
    for (int i = 0; i < 12; i++) {
        cout << keys[i] << " " << thingy[keys[i]] << endl;
    }
}
