#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    string prev, cur;
    cin >> n >> prev;
    n--;
    while (n--) {
        cin >> cur;
        if (prev == "drunk" && cur == "sober") ans++;
        prev = cur;
    }
    cout << ans << endl;
}
