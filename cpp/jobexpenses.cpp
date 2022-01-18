#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (x < 0) {
            count -= x;
        }
    }
    cout << count << endl;
}
