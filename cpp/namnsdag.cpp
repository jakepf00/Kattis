#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    int days;
    cin >> name >> days;
    for (int i = 0; i < days; i++) {
        string day;
        cin >> day;
        if (day.length() != name.length()) continue;
        int changes = 0;
        for (int j = 0; j < name.length(); j++) {
            if (name[j] != day[j]) changes++;
        }
        if (changes <= 1) {
            cout << i + 1 << endl;
            break;
        }
    }
}
