#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, r, c;
    cin >> n >> r >> c;
    vector<string> a(r);
    for (int i = 0; i < r; i++) {
        cin >> a[i];
        for (int j = 1; j < c; j++) {
            string b;
            cin >> b;
        }
    }
    for (int i = 0; i < r; i++) {
        string b;
        cin >> b;
        if (a[i] == b) cout << "left" << endl;
        else cout << "right" << endl;
        for(int j = 1; j < c; j++) {
            cin >> b;
        }
    }
}
