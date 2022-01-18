#include<bits/stdc++.h>

using namespace std;

int main() {
    int b, br, bs, a, as;
    cin >> b >> br >> bs >> a >> as;

    int bobYears = br - b;
    int bobSavings = bobYears * bs;


    int aliceMoney = 0;
    while(true) {
        a++;
        aliceMoney += as;
        if (aliceMoney > bobSavings) {
            cout << a << endl;
            return 0;
        }
    }
}
