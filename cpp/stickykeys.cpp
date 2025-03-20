#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    for (int i = 0; i < a.length(); i++) {
        while (i + 1 < a.length() && a[i] == a[i + 1]) {
            a.erase(i + 1, 1);
        }
    }
    cout << a << endl;
}
