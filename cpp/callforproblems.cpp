#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0;
    while (n--) {
        int b;
        cin >> b;
        if (b % 2 == 1) a++;
    }
    cout << a << endl;
}
