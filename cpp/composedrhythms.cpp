#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a / 2 << endl;
    if (a % 2 == 1) {
        cout << "3 ";
        a -= 3;
    }
    for (int i = 0; i < a / 2; i++) {
        cout << "2 ";
    }
    cout << endl;
}
