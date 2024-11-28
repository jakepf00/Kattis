#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    n--;
    while (n--) {
        int b;
        cin >> b;
        a = min(a, b);
    }
    cout << a << endl;
}
