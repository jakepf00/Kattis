#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double c = 0;
    for (int i = 0; i < b; i++) {
        string d;
        cin >> d;
        for (auto j : d) {
            if (j == '.') c++;
        }
    }
    cout << fixed << setprecision(8) << c / (a * b) << endl;
}
