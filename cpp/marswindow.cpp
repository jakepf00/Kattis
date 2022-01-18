#include<bits/stdc++.h>

using namespace std;

int main() {
    int year;
    cin >> year;
    year *= 12;
    year -= 1;
    if (year % 26 <= 12) cout << "yes" << endl;
    else cout << "no" << endl;
}
