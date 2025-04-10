#include<bits/stdc++.h>
using namespace std;

int main() {
    int r, n;
    cin >> r >> n;
    if (r == n) {
        cout << "too late" << endl;
        return 0;
    }
    vector<bool> a(r, false);
    while (n--) {
        int b;
        cin >> b;
        a[b - 1] = true;
    }
    for (int i = 0; i < r; i++) {
        if (a[i] == false) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}
