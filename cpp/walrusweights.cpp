#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> totals;
    totals.insert(0);
    int ans = 0;

    while (n--) {
        int weight;
        cin >> weight;
        vector<int> toInsert;
        for (auto i : totals) {
            if (i < 1000) {
                toInsert.push_back(i + weight);
                if (abs(i + weight - 1000) < abs(ans - 1000)) ans = i + weight;
                if (abs(i + weight - 1000) == abs(ans - 1000)) ans = max(i + weight, ans);
            }
        }
        for (auto i : toInsert) totals.insert(i);
    }

    cout << ans << endl;
}
