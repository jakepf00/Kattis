#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    map<string, string> inits;
    while (a--) {
        string c, d;
        cin >> c >> d;
        string init = c.substr(0, 1) + d.substr(0, 1);
        if (inits.find(init) != inits.end()) inits[init] = "ambiguous";
        else inits[init] = c + " " + d;
    }
    while (b--) {
        string init;
        cin >> init;
        if (inits.find(init) == inits.end()) cout << "nobody" << endl;
        else cout << inits[init] << endl;
    }
}

