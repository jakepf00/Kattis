#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<bool> a(9);
    for (int i = 0; i < 9; i++) {
        char b;
        cin >> b;
        if (b == 'O') a[i] = true;
        else a[i] = false;
    }
    if (a[0] && a[1] && a[2]) cout << "Jebb" << endl;
    else if (a[3] && a[4] && a[5]) cout << "Jebb" << endl;
    else if (a[6] && a[7] && a[8]) cout << "Jebb" << endl;
    else if (a[0] && a[3] && a[6]) cout << "Jebb" << endl;
    else if (a[1] && a[4] && a[7]) cout << "Jebb" << endl;
    else if (a[2] && a[5] && a[8]) cout << "Jebb" << endl;
    else if (a[0] && a[4] && a[8]) cout << "Jebb" << endl;
    else if (a[2] && a[4] && a[6]) cout << "Jebb" << endl;
    else cout << "Neibb" << endl;
}
