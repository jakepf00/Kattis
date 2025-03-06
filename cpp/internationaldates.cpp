#include<bits/stdc++.h>
using namespace std;

int main() {
    char temp, a, b, c, d;
    cin >> a >> b >> temp >> c >> d >> temp >> temp >> temp >> temp >> temp;
    int e = stoi(string(1, a) + b), f = stoi(string(1, c) + d);
    if (e > 12) cout << "EU" << endl;
    else if (f > 12) cout << "US" << endl;
    else cout << "either" << endl;
}
