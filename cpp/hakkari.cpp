#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<pair<int, int>> mines;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            char c;
            cin >> c;
            if (c == '*') mines.push_back(make_pair(i + 1, j + 1));
        }
    }
    cout << mines.size() << endl;
    for (auto i : mines) {
        cout << i.first << " " << i.second << endl;
    }
}
