#include <bits/stdc++.h>

using namespace std;

int find(vector<int>& d, int a) {
    if (d[a] == -1) {
        return a;
    }
    return d[a] = find(d, d[a]);
}

void join(vector<int>& d, int a, int b) {
    a = find(d, a);
    b = find(d, b);

    if (a == b) return;

    d[a] = b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> d (n + 1, -1);
    while (q--) {
        char operation;
        int a, b;
        cin >> operation >> a >> b;
        if (operation == '?') {
            if (find(d, a) == find(d, b)) cout << "yes" << endl;
            else cout << "no" << endl;
        } else {
            join(d, a, b);
        }
    }
}
