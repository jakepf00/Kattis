#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<long long> ans(10000, -1);
    ans[0] = 2;
    ans[1] = 3;
    for (int i = 2; i < 10000; i++) {
        ans[i] = (ans[i-1] + ans[i-2]) % 1000000007;
    }
    while (t--) {
        int a;
        cin >> a;
        cout << ans[a-1] << endl;
    }
}
