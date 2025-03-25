#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string game;
    cin >> game;
    int A = 0, H = 0;
    int a = 0, h = 0;
    for (auto i : game) {
        if (i == 'A') a++;
        else h++;

        if (a == 3) {
            A++;
            a = 0;
            h = 0;
        }
        if (h == 3) {
            H++;
            a = 0;
            h = 0;
        }
    }
    if (A == n) cout << "Hannes" << endl;
    else cout << "Arnar" << endl;
}
