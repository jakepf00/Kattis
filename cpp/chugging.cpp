#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int e = 0;
    for (int i = 0; i < n; i++) e += i;
    int alice = a * n + e * b;
    int bob = c * n + e * d;
    if (alice > bob) cout << "Bob" << endl;
    else if (alice < bob) cout << "Alice" << endl;
    else cout << "=" << endl;
}
