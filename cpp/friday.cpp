#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d, m;
        cin >> d >> m;
        int dayOne = 0;
        int fridays = 0;
        for (int i = 0; i < m; i++) {
            int days;
            cin >> days;
            if (days >= 13 && dayOne == 0) fridays++;
            dayOne = (dayOne + days) % 7;
        }
        cout << fridays << endl;
    }
}
