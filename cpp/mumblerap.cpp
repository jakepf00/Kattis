#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    string b;
    cin >> a >> b;
    long long hi = 0;
    string cur = "";

    for (auto i : b) {
        if (i >= '0' && i <= '9') {
            cur.push_back(i);
        }
        else if (cur.length() > 0) {
            hi = hi > stoi(cur) ? hi : stoi(cur);
            cur = "";
        }
    }
    if (cur.length() > 0) {
        hi = hi > stoi(cur) ? hi : stoi(cur);
        cur = "";
    }
    cout << hi << endl;
}
