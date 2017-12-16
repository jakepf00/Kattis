#include <bits/stdc++.h>

using namespace std;

int main() {
    string ans, s;
    cin >> s;

    for (auto i : s) {
        if (i == '<') {
            ans.pop_back();
        } else {
            ans.push_back(i);
        }
    }

    cout << ans << endl;

    return 0;
}
