#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long cur = 0, m = 0;
    while (n--) {
        long long a;
        cin >> a;
        cur -= a;
        cin >> a;
        cur += a;
        m = max(m, cur);
    }
    cout << m << endl;
}
