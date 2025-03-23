#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, pair<int, string>> a;
    while (n--) {
        string name, date;
        int b;
        cin >> name >> b >> date;
        if (a.find(date) != a.end()) {
            if (b > a[date].first) {
                a[date] = make_pair(b, name);
            }
        }
        else a[date] = make_pair(b, name);
    }
    cout << a.size() << endl;
    vector<string> b;
    for (auto i : a) b.push_back(i.second.second);
    sort(b.begin(), b.end());
    for (auto i : b) cout << i << endl;
}
