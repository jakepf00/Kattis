#include<bits/stdc++.h>
using namespace std;

int main() {
    string access, deny, other;
    char paren;
    int ms;
    string pw = "";
    do {
        pw.push_back('0');
        cout << pw << endl;
        cin >> access >> deny;
        if (deny == "GRANTED") return 0;
        cin >> paren >> ms >> other;
    } while (ms == 5);

    string possible = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < pw.length(); i++) {
        for (char j : possible) {
            pw[i] = j;
            cout << pw << endl;
            cin >> access >> deny;
            if (deny == "GRANTED") return 0;
            cin >> paren >> ms >> other;
            if (ms != (i * 9 + 14)) break;
        }
    }
}
