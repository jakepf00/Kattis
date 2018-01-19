#include<bits/stdc++.h>

using namespace std;

int sumDigits(int number) {
    int ans = 0;
    while (number >= 1) {
        ans += (number % 10);
        number /= 10;
    }
    return ans;
}

int main() {
    int n, p;
    while(true) {
        cin >> n;
        if (n == 0) return 0;
        p = 11;
        while(true) {
            if (sumDigits(n * p) == sumDigits(n)) break;
            p++;
        }
        cout << p << endl;
    }
}
