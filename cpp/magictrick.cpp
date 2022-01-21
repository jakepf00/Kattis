#include<bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin >> word;
    unordered_set<char> chars;
    bool good = true;
    for (auto i : word) {
        if (chars.find(i) != chars.end()) {
            good = false;
            break;
        }
        chars.insert(i);
    }
    if (good) cout << 1 << endl;
    else cout << 0 << endl;
}
