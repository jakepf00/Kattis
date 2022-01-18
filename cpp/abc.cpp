#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> thing;
    thing.resize(3);
    string abc;
    cin >> thing[0] >> thing[1] >> thing[2] >> abc;

    sort(thing.begin(), thing.end());

    for (auto i : abc) {
        switch(i) {
            case 'A': cout << thing[0] << " "; break;
            case 'B': cout << thing[1] << " "; break;
            case 'C': cout << thing[2] << " "; break;
        }
    }

    cout << endl;
}
