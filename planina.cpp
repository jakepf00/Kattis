#include <bits/stdc++.h>

using namespace std;

int main() {
    int iterations;
    cin >> iterations;
    int ans = 2;
    for (int i = 0; i < iterations; i++) {
        ans = ((ans - 1) * 2) + 1;
    }
    ans *= ans;
    cout << ans << endl;
}
