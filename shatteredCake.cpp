#include <bits/stdc++.h>
using namespace std;

int main() {
    int width, n;
    cin >> width >> n;
    int total = 0;
    while (n--) {
        int w, l;
        cin >> w >> l;
        total += (w * l);
    }
    total /= width;
    cout << total << endl;
}
