#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> pieces(m, false);
    while(n--) {
        int k;
        cin >> k;
        while (k--) {
            int p;
            cin >> p;
            pieces[p - 1] = true;
        }
    }
    for(auto i : pieces) {
        if (i == false) {
            cout << "Neibb" << endl;
            return 0;
        }
    }
    cout << "Jebb" << endl;
}
