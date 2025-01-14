#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long total = 0;
    while (n--) {
        string a;
        long long b;
        cin >> a >> b;
        total += b;
    }
    if (total > 0) cout << "Usch, vinst" << endl;
    else if (total < 0) cout << "Nekad" << endl;
    else cout << "Lagom" << endl;
}
