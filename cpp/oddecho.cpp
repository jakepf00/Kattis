#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        if (!(i % 2)) cout << word << endl;
    }
}
