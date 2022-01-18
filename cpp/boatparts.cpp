#include <bits/stdc++.h>

using namespace std;

int main() {
    int parts, days;
    cin >> parts >> days;
    vector<string> replaced;
    for (int i = 0; i < days; i++) {
        string part;
        cin >> part;
        bool exists = false;
        for (int j = 0; j < replaced.size(); j++) {
            if (replaced[j] == part) exists = true;
        }
        if (!exists) replaced.push_back(part);
        if (replaced.size() == parts) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << "paradox avoided" << endl;
}
