#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        nums.push_back(c);
    }
    int a = 0, b = 0, count = 0, ans = 0;
    if (nums[0] % 2 == 0) count++;
    while (b < m - 1) {
        b++;
        if (nums[b] % 2 == 0) count++;
    }
    while (b < n) {
        if (count >= 2) ans++;
        if (nums[a] % 2 == 0) count--;
        a++;
        b++;
        if (nums[b] % 2 == 0) count++;
    }
    cout << ans << endl;
}
