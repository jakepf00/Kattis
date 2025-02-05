#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int min = 0;
    int max = 1000000;
    while (a--) {
        int b, c;
        cin >> b >> c;
        if (b > min) min = b;
        if (c < max) max = c;
        if (min > max) {
            cout << "bad news" << endl;
            return 0;
        }
    }
    cout << max - min + 1 << " " << min << endl;
}
