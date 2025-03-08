#include<bits/stdc++.h>
using namespace std;

int main( ){
    int n;
    cin >> n;
    map<string, int> a;
    while (n--) {
        vector<int> b;
        for (int i = 0; i < 5; i++) {
            int c;
            cin >> c;
            b.push_back(c);
        }
        sort(b.begin(), b.end());
        string d = "";
        for (int i = 0; i < 5; i++) {
            d += to_string(b[i]);
        }
        a[d]++;
    }
    int ans = 0, pop = 0;
    for (auto i : a) {
        if (i.second > pop) {
            pop = i.second;
            ans = i.second;
        }
        else if (i.second == pop) {
            ans += i.second;
        }
    }
    cout << ans << endl;
}
