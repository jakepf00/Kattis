#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;
    while (n--) {
        char d;
        cin >> d;
        if (d == 'J') a++;
        cin >> d;
        if (d == 'J') b++;
        cin >> d;
        if (d == 'J') c++;
    }
    cout << min(a, min(b, c)) << endl;
}
