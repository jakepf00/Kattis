#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> rolls;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        rolls[a]++;
    }
    bool possible = false;
    for (int i = 1; i <= 6; i++) {
        if (rolls[i] + m >= n) possible = true;
    }
    if (possible) cout << "Ja" << endl;
    else cout << "Nej" << endl;
}
