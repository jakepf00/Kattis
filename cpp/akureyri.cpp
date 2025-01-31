#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    unordered_map<string, int> b;
    while(a--) {
        string c, d;
        cin >> c >> d;
        b[d]++;
    }
    for (auto i : b) cout << i.first << " " << i.second << endl;
}
