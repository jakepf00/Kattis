#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 90 || b > 90 || c > 90) cout << "Trubbig Triangel" << endl;
    else if (a == 90 || b == 90 || c == 90) cout << "Ratvinklig Triangel" << endl;
    else cout << "Spetsig Triangel" << endl;
}
