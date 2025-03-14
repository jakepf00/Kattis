#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string a, b;
        cin >> a >> b;
        map<char, int> c;
        for (auto i : a) c[i]++;
        bool works = true;
        for (auto i : b) {
            if (c[i] == 0) {
                works = false;
                break;
            }
        }
        if (works) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
