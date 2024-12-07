#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    int len = a.length();
    len /= 3;
    string b, c, d;
    b = a.substr(0, len);
    c = a.substr(len, len);
    d = a.substr(len + len, len);
    if (b == c && c == d) cout << b << endl;
    else if (b == c) cout << b << endl;
    else if (b == d) cout << b << endl;
    else cout << c << endl;
}
