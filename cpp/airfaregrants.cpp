#include<bits/stdc++.h>
using namespace std;

int main() {
    int low = 0, high = 0;
    int n;
    cin >> n;
    cin >> low;
    high = low;
    n--;
    while (n--) {
        int a;
        cin >> a;
        low = min(low, a);
        high = max(high, a);
    }
    high /= 2;
    if (low - high <= 0) cout << 0 << endl;
    else cout << low - high << endl;
}
