#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << "+";
    for (int i = 0; i < a; i++) cout << "-";
    cout << "+" << endl;
    for (int i = 0; i < a; i++) {
        cout << "|";
        for (int j = 0; j < a; j++) cout << " ";
        cout << "|" << endl;
    }
    cout << "+";
    for (int i = 0; i < a; i++) cout << "-";
    cout << "+" << endl;
}
