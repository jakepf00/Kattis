#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int total = abs(a - b) * 4;
    while (n--) {
        int c;
        cin >> c;
        if ((c > a && c < b) || (c < a && c > b)) total += 10;
    }
    cout << total << endl;
}
