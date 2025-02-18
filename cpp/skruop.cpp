#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int v = 7;
    while (n--) {
        string a, b;
        cin >> a >> b;
        if (b == "op!" && v < 10) v++;
        if (b == "ned!" && v > 0) v--;
    }
    cout << v << endl;
}
