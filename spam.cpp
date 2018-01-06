#include<bits/stdc++.h>

using namespace std;

int main() {
    string email;
    double whitespace = 0;
    double lowercase = 0;
    double uppercase = 0;
    double symbols = 0;
    cin >> email;
    for (auto i : email) {
        if (i == 95) {
            whitespace++;
        } else if ((i >= 97) && (i <= 122)) {
            lowercase++;
        } else if ((i >= 65) && (i <= 90)) {
            uppercase++;
        } else {
            symbols++;
        }
    }
    double total = email.length();
    cout << whitespace / total << endl << lowercase / total << endl << uppercase / total << endl << symbols / total << endl;
}
