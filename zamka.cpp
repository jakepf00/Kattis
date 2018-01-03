#include<bits/stdc++.h>

using namespace std;

int main() {
    int l, d, x;
    cin >> l >> d >> x;
    vector<int> ans;
    int temp;
    int thing;

    l--;
    for (l; l <= d; l++) {
        temp = l;
        while (temp > 0) {
            thing += (temp % 10);
            temp /= 10;
        }

        if (thing == x) {
            ans.push_back(l);
        }
        thing = 0;
    }

    cout << ans[0] << endl << ans.back() << endl;
}
