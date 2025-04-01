#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    char prev, cur;
    cin >> prev;
    while (--n) {
        cin >> cur;
        if (prev == cur) total++;
        prev = cur;
    }
    cout << total << endl;
}
