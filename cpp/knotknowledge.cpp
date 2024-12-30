#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.insert(b);
    }
    for (int i = 1; i < n; i++) {
        int b;
        cin >> b;
        a.erase(b);
    }
    for (auto i : a) cout << i << endl;
}
