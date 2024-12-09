#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(2);
    while (fib[fib.size() - 1] < a) {
        fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
    }
    vector<int> ans;
    for (int i = fib.size() - 1; i >= 0; i--) {
        if (fib[i] <= a) {
            ans.push_back(fib[i]);
            a -= fib[i];
        }
        if (a == 0) break;
    }
    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
