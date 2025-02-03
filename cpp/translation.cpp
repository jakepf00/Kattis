#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<string> sentence(a);
    for (int i = 0; i < a; i++) cin >> sentence[i];

    int b;
    cin >> b;
    map<string, string> dict;
    while (b--) {
        string c, d;
        cin >> c >> d;
        dict[c] = d;
    }

    for (auto i : sentence) {
        cout << dict[i] << " ";
    }
    cout << endl;
}
