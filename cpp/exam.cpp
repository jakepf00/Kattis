#include<bits/stdc++.h>
using namespace std;

int main() {
    int correct;
    string x, y;
    cin >> correct >> x >> y;

    int ans = 0;

    for (int i = 0; i < x.length(); i++) {
        if (x[i] == y[i] && correct > 0) {
            ans++;
            correct--;
        }
        else if (x[i] != y[i] && correct < x.length() - i) {
            ans++;
        }
    }

    cout << ans << endl;
}
