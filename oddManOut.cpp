#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases, guests, guest, oddPerson;
    cin >> cases;
    vector<int> thing;

    for (int i = 0; i < cases; i++) {
        cin >> guests;
        for (int j = 0; j < guests; j++) {
            cin >> guest;
            thing.push_back(guest);
        }
        sort(thing.begin(), thing.end());
        for (int j = 0; j < thing.size(); j += 2) {
            if (thing[j] != thing[j + 1]) {
                oddPerson = thing[j];
                break;
            }
        }
        cout << "Case #" << i + 1 << ": " << oddPerson << endl;
        thing.resize(0);
    }
}
