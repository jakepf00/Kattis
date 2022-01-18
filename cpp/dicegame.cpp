#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int gunnar = a + b + c + d;
    cin >> a >> b >> c >> d;
    int emma = a + b + c + d;

    if (emma > gunnar) {
        cout << "Emma" << endl;
    } else if (gunnar > emma) {
        cout << "Gunnar" << endl;
    } else {
        cout << "Tie" << endl;
    }
}
