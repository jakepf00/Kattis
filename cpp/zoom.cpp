#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (i % k == 0) cout << a << " ";
    }
    cout << endl;
}
