#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a, b, c;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        a.push_back(d);
    }
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        b.push_back(d);
    }
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        c.push_back(d);
    }

    for (int i = 0; i < n; i++) {
        vector<int> temp = { a[i], b[i], c[i] };
        sort(temp.begin(), temp.end());
        cout << temp[1] << " ";
    }
    cout << endl;
}
