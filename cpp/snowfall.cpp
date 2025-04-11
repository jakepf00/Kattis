#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0;
    while (n--) {
        int b, c;
        cin >> b >> c;
        if (b == 1) {
            a -= c;
            if (a < 0) a = 0;
        }
        else a += c;
    }
    cout << a << endl;
}
