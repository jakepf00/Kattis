#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        string a;
        getline(cin, a);
        for (auto& i : a) i = tolower(i);
        a[0] = toupper(a[0]);
        cout << a << endl;
    }
}
