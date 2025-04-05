#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a;
    while (cin >> b) {
        bool ban = false;
        for (auto i : a) {
            if (b.find(i) != string::npos) {
                ban = true;
                break;
            }
        }
        if (ban) {
            for (auto i : b) cout << "*";
            cout << " ";
        }
        else cout << b << " ";
    }
    cout << endl;
}
