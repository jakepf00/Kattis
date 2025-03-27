#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, a = 0;
    cin >> n;
    int b = 1, c = 3, d = 6;
    while (d < n) {
        a++;
        d /= b;
        b++;
        c++;
        d *= c;
    }
    cout << a << endl;
}
