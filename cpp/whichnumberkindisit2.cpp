#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> squares;
    for (int i = 0; i < 1001; i++) squares.insert(i * i);

    int a;
    cin >> a;
    while (a--) {
        int b;
        cin >> b;

        bool odd = b % 2 == 1;
        bool square = squares.find(b) != squares.end();

        if (odd && square) cout << "OS" << endl;
        else if (odd) cout << "O" << endl;
        else if (square) cout << "S" << endl;
        else cout << "EMPTY" << endl;
    }
}
