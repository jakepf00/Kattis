#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, long long> a;
    while (n--) {
        string b;
        long long c;
        cin >> b >> c;
        a[b] += c;
    }
    string b;
    long long c = -1;
    for (auto i : a) {
        if (i.second > c) {
            b = i.first;
            c = i.second;
        }
    }
    cout << b << endl;
}
