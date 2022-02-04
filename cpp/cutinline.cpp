#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> line;
    while (n--) {
        string name;
        cin >> name;
        line.push_back(name);
    }
    cin >> n;
    while (n--) {
        string action, n1, n2;
        cin >> action >> n1;
        if (action == "cut") {
            cin >> n2;
            line.insert(find(line.begin(), line.end(), n2), n1);
        }
        else {
            line.erase(find(line.begin(), line.end(), n1));
        }
    }
    for (auto i : line) {
        cout << i << endl;
    }
}
