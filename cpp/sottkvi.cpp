#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, d;
    cin >> n >> k >> d;
    k += d;
    int ans = 0;
    while (n--) {
        int a;
        cin >> a;
        if (a + 14 <= k) ans++;
    }
    cout << ans << endl;
}
