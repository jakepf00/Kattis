#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, p, s;
    cin >> n >> p >> s;
    while (s--) {
        int a;
        cin >> a;
        bool contains = false;
        while (a--) {
            int b;
            cin >> b;
            if (b == p) contains = true;
        }
        if (contains) cout << "KEEP" << endl;
        else cout << "REMOVE" << endl;
    }
}
