#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    int set = 1;
    while (cin >> a && a != 0) {
        vector<string> names(a);
        for (int i = 0; i < a; i++) cin >> names[i];
        vector<string> ans;
        int x;
        for (int i = 0; i < a; i += 2) {
            ans.push_back(names[i]);
        }
        if (a % 2 == 0) {
            for (int i = a - 1; i > 0; i -= 2) {
                ans.push_back(names[i]);
            }
        } else {
            for (int i = a - 2; i > 0; i -= 2) {
                ans.push_back(names[i]);
            }
        }
        cout << "SET " << set << endl;
        set++;
        for (int i = 0; i < a; i++) {
            cout << ans[i] << endl;
        }
    }
}
