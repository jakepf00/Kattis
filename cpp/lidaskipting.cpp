#include<bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    int b = 0;
    for (auto i : a) {
        b += i - '0';
    }
    if (b % 3 == 0) cout << "Jebb" << endl;
    else cout << "Neibb" << endl;
}
