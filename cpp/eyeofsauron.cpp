#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    if (a.length() % 2 == 1) cout << "fix" << endl;
    else if (a.find("()") != string::npos && a.find("()") == (a.length() / 2 - 1)) cout << "correct" << endl;
    else cout << "fix" << endl;
}
