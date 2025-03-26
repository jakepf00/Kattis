#include<bits/stdc++.h>
using namespace std;

int main() {
    int length, n;
    cin >> length >> n;
    string a;
    while (length--) a.push_back('?');
    while (n--) {
        int b;
        string c;
        cin >> b >> c;
        b--;
        for (int i = 0; i < c.length(); i++) {
            if (a[b + i] != '?' && a[b + i] != c[i]) {
                cout << "Villa" << endl;
                return 0;
            }
            a[b + i] = c[i];
        }
    }
    cout << a << endl;
}
