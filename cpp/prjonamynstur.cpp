#include<bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> a;
    a['.'] = 20;
    a['O'] = 10;
    a['\\'] = 25;
    a['/'] = 25;
    a['A'] = 35;
    a['^'] = 5;
    a['v'] = 22;
    int n, m, total = 0;
    cin >> n >> m;
    while (n--) {
        for (int i = 0; i < m; i++) {
            char b;
            cin >> b;
            total += a[b];
        }
    }
    cout << total << endl;
}
