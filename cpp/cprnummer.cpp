#include<bits/stdc++.h>
using namespace std;

int main() {
    string mult = "43276504321";
    int total = 0;
    for (auto i : mult) {
        char a;
        cin >> a;
        total += (a - '0') * (i - '0');
    }
    cout << ((total % 11) == 0) << endl;
}
