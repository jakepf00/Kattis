#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    getline(cin, a);
    if (a.find(":)") != string::npos && a.find(":(") != string::npos) cout << "double agent" << endl;
    else if (a.find(":)") != string::npos) cout << "alive" << endl;
    else if (a.find(":(") != string::npos) cout << "undead" << endl;
    else cout << "machine" << endl;
}
