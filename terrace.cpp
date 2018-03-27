#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, x, people = 0, denied = 0;
    cin >> l >> x;
    while (x--) {
        string thing;
        cin >> thing;
        int num;
        cin >> num;
        if (thing == "enter") {
            if (people + num > l) denied++;
            else people += num;
        } else {
            people -= num;
        }
    }
    cout << denied << endl;
}
