#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;
    k = k % (m + n);

    if (k < m) cout << "Barb" << endl;
    else cout << "Alex" << endl;
}
