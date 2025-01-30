#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a, b, c;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int d;
            cin >> d;
            if (d >= 0) {
                a.push_back(i + 1);
                b.push_back(j + 1);
                c.push_back(d);
            }
        }
    }
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }
}
