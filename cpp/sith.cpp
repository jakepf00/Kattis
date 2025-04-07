#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    int a, b, c;
    getline(cin, n);
    cin >> a >> b >> c;
    if (c < 0) cout << "JEDI" << endl;
    else if (a - b < 0) cout << "SITH" << endl;
    else cout << "VEIT EKKI" << endl;
}
