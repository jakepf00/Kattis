#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, total = 0;
    cin >> n >> k;
    while (n--) {
        set<string> box;
        for (int i = 0; i < k; i++) {
            string a;
            cin >> a;
            if (box.find(a) != box.end()) total++;
            else box.insert(a);
        }
    }
    cout << total << endl;
}
