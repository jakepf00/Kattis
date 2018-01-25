#include<bits/stdc++.h>

using namespace std;

int main() {
    string color;
    int radius;
    map <int, string> cups;
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        cin >> color;
        if (color[0] <= 57) { // number
            radius = stoi(color);
            cin >> color;
            cups.insert(pair<int, string> (radius, color));
        } else {
            cin >> radius;
            radius *= 2;
            cups.insert(pair<int, string> (radius, color));
        }
    }

//    sort(cups.begin(), cups.end());

    for (auto thing : cups) {
        cout << thing.second << endl;
    }
}
