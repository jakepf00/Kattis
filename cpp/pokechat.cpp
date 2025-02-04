#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    cin >> b;
    for(int i = 0; i < b.length(); i += 3) {
        string c = "";
        c.push_back(b[i]);
        c.push_back(b[i+1]);
        c.push_back(b[i+2]);
        int d = stoi(c);
        cout << a[d-1];
    }
    cout << endl;
}
