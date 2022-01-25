#include<bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    string problems;
    cin >> problems;
    string x = "";
    string y = "";
    bool before = true;
    for (auto i : problems) {
        if (isdigit(i) && before) {
            x.push_back(i);
        }
        else if (isdigit(i)) {
            y.push_back(i);
        }
        else if (i == '-') {
            before = false;
        }
        else if (before) {
            ans++;
            x = "";
            y = "";
        }
        else {
            before = true;
            ans += stoi(y) - stoi(x) + 1;
            x = "";
            y = "";
        }
    }
    if (y != "") ans += stoi(y) - stoi(x) + 1;
    else ans++;
    cout << ans << endl;
}
