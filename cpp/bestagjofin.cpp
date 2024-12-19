#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0;
    string b;
    while (n--) {
        string c;
        int d;
        cin >> c >> d;
        if (d > a) {
            a = d;
            b = c;
        }
    }
    cout << b << endl;
}
