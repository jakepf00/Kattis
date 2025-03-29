#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int c = 0, d = 0;
    while (c < a.length() && d < b.length()) {
        if (a[c] == b[d]) {
            c++;
            d++;
        }
        else d++;
    }
    if (c == a.length()) cout << "Ja" << endl;
    else cout << "Nej" << endl;
}
