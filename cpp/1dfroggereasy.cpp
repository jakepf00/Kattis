#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, s, m;
    cin >> n >> s >> m;
    s--;
    vector<int> board(n);
    vector<bool> visited(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        board[i] = a;
        visited[i] = false;
    }
    int hops = 0;
    while (true) {
        if (s >= n) {
            cout << "right" << endl << hops << endl;
            return 0;
        }
        else if (s < 0) {
            cout << "left" << endl << hops << endl;
            return 0;
        }
        else if (board[s] == m) {
            cout << "magic" << endl << hops << endl;
            return 0;
        }
        else if (visited[s]) {
            cout << "cycle" << endl << hops << endl;
            return 0;
        }
        visited[s] = true;
        hops++;
        s = s + board[s];
    }
}
