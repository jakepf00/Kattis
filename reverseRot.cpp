#include<bits/stdc++.h>

using namespace std;

int main() {
    char temp;
    int shift;
    string word;
    while (cin >> shift >> word) {
        reverse(word.begin(), word.end());
        for (auto i : word) {
            temp = i + shift;
            if (i == 95) temp = 91 + shift;
            if (i == 46) temp = 92 + shift;
            if (temp > 92) {
                temp -= 28;
            } if (temp == 91) {
                cout << '_';
            } else if (temp == 92) {
                cout << '.';
            } else {
                cout << (char) temp;
            }
        }
        cout << endl;
    }
}

