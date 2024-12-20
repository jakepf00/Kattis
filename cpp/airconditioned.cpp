#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> minions;
    while (n--) {
        int a, b;
        cin >> a >> b;
        minions.push_back(make_pair(a, b));
    }
    sort(minions.begin(), minions.end());

    int curMax = 0;
    int rooms = 0;
    for (auto i : minions) {
        if (i.first > curMax) {
            rooms++;
            curMax = i.second;
        }
        else curMax = min(curMax, i.second);
    }
    cout << rooms << endl;
}
