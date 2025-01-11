#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> c;
    unordered_set<int> a;
    while (n--) {
        int b;
        cin >> b;
        c.push_back(b);
    }
    while (m--) {
        int b;
        cin >> b;
        a.insert(b);
    }
    for (auto i : c) {
        if (a.find(i) != a.end()) cout << i << " ";
    }
    cout << endl;
}
