#include<bits/stdc++.h>
using namespace std;

int main() {
    bool k = false, p = false, w = false;
    int a;
    cin >> a;
    while (a--) {
        string b;
        cin >> b;
        if (b == "keys") k = true;
        if (b == "phone") p = true;
        if (b == "wallet") w = true;
    }
    if (k && p && w) cout << "ready" << endl;
    if (!k) cout << "keys" << endl;
    if (!p) cout << "phone" << endl;
    if (!w) cout << "wallet" << endl;
}
