#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        string thing;
        cin >> thing;
        if (thing[0] == 'P') {
            cout << "skipped" << endl;
            continue;
        }
        int i = 0;
        string strA = "";
        for (i; i < thing.length(); i++) {
            if (thing[i] == '+') {
                break;
            }
            strA.push_back(thing[i]);
        }
        i++;
        string strB = "";
        for (i; i < thing.length(); i++) {
            strB.push_back(thing[i]);
        }
        int a = stoi(strA);
        int b = stoi(strB);
        cout << a + b << endl;
    }
}
