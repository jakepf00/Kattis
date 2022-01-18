#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> ans;
    int a;
    bool b = true;

    for (int i = 0; i < 10; i++) {
        cin >> a;
        a %= 42;
        for (int j = 0; (j <= i) && (j < ans.size()); j++) {
            if (a == ans[j]) {
                b = false;
            }
        }
        if (b) {
            ans.push_back(a);
        }
        b = true;
    }

    cout << ans.size() << endl;
}
