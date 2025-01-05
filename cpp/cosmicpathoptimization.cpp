#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    long long total = 0;
    for (int i = 0; i < a; i++) {
        long long b;
        cin >> b;
        total += b;
    }
    total /= a;
    cout << total << endl;
}
