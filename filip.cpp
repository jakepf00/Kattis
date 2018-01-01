#include <bits/stdc++.h>

using namespace std;

int main() {
    string one, two;
    cin >> one >> two;

    reverse(one.begin(), one.end());
    reverse(two.begin(), two.end());

    cout << max(one, two) << endl;
}
