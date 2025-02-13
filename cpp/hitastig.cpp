#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, h, l;
    cin >> n >> h;
    l = h;
    while (--n) {
        long long a;
        cin >> a;
        h = a > h ? a : h;
        l = a < l ? a : l;
    }
    cout << h << " " << l << endl;
}
