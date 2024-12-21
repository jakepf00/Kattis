#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int digits = 1;
    int n = 2;
    a--;
    while (a >= n) {
        a -= n;
        n *= 2;
        digits++;
    }

    string ans = "";
    int curDig = pow(2, digits - 1);
    for (int i = 0; i < digits; i++) {
        if (curDig <= a) {
            ans.push_back('7');
            a -= curDig;
        }
        else ans.push_back('4');
        curDig /= 2;
    }

    cout << ans << endl;
}
