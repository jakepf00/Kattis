#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<int> a;
    int n;
    cin >> n;
    while (n--) {
        int b;
        cin >> b;
        a.push_front(b);
    }
    for (auto i : a) cout << i << endl;
}
