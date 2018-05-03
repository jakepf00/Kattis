#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    int times[3];
    cin >> a >> b >> c >> d >> times[0] >> times[1] >> times[2];
    int aLoop = a + b;
    int bLoop = c + d;
    for (int i = 0; i < 3; i++) {
        times[i]--;
        int attacked = 0;
        int thing;

        thing = times[i] % aLoop;
        if (thing < a) attacked++;

        thing = times[i] % bLoop;
        if (thing < c) attacked++;

        if (attacked == 0) cout << "none" << endl;
        else if (attacked == 1) cout << "one" << endl;
        else cout << "both" << endl;
    }
}
