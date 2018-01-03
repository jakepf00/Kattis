#include<bits/stdc++.h>

using namespace std;

int main() {
    double h, v, ans;
    cin >> h >> v;

    v = v * (M_PI / 180);

    ans = h/sin(v);

    cout << (int) ceil(ans) << endl;
}
