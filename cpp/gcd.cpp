#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long temp;
    if (b > a) {
        temp = b;
        b = a;
        a = temp;
    }
    while (a % b != 0) {
        a = a % b;
        temp = b;
        b = a;
        a = temp;
    }
    cout << b << endl;
}
