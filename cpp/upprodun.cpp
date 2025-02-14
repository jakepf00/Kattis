#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = b / a;
    int d = b % a;
    while (a--) {
        for (int i = 0; i < c; i++) cout << "*";
        if (a < d) cout << "*";
        cout << endl;
    }
}
