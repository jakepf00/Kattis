#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    while ((cin >> x) && (x != 0)) {
        vector<int> l1(x);
        vector<int> l2(x);
        for (int i = 0; i < x; i++) {
            cin >> l1[i];
        }
        for (int i = 0; i < x; i++) {
            cin >> l2[i];
        }
        vector<int> l1sort = l1;
        sort(l1sort.begin(), l1sort.end());
        sort(l2.begin(), l2.end());
        for (int i = 0; i < x; i++) {
            int y = l1[i];
            for (int j = 0; j < x; j++) {
                if (l1sort[j] == y) {
                    cout << l2[j] << endl;
                    break;
                }
            }
        }
        cout << endl;
    }
}
