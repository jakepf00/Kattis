#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    a.push_back(1);
    a.push_back(1);
    a.push_back(2);

    while (a.size() <= n) {
        int b = a[a.size() - 1] + a[a.size() - 2] + a[a.size() - 3];
        a.push_back(b);
    }

    cout << a[n] << endl;
}
