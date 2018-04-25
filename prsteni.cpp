#include <bits/stdc++.h>

using namespace std;

int main() {
    int rings, first, a;
    cin >> rings >> first;
    rings--;
    while (rings--) {
        cin >> a;
        int f = first;
        // f / a reduced form
        int b = max(f, a);
        for (int i = 1; i <= b; i++) {
            if ((f % i == 0) && (a % i == 0)) {
                f /= i;
                a /= i;
                i = 1;
                b = max(f, a);
            }
        }
        if (f == a) {
            f = 1;
            a = 1;
        }
        cout << f << '/' << a << endl;
    }
}
