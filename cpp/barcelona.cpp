#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == k) {
            if (i == 0) cout << "fyrst" << endl;
            else if (i == 1) cout << "naestfyrst" << endl;
            else cout << i + 1 << " fyrst" << endl;
            break;
        }
    }
}
