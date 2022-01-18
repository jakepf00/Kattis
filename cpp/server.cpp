#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, a, total = 0, i = 0;
    cin >> n >> t;
    for (i; i < n; i++) {
        cin >> a;
        total += a;
	if (total > t) {
            cout << i << endl;
	    return 0;
	}
    }
    cout << i << endl;
    return 0;
}
