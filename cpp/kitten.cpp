#include<bits/stdc++.h>

using namespace std;

int main() {
    int start;
    cin >> start;

    unordered_map<int, int> path;

    int nextBranch;
    string connections;
    while (cin >> nextBranch && nextBranch != -1) {
        getline(cin, connections);
        istringstream is(connections);
        int branch;
        while (is >> branch) {
            path.insert(pair<int, int>(branch, nextBranch));
        }
    }

    cout << start << " ";
    while (path.find(start) != path.end()) {
        cout << path[start] << " ";
        start = path[start];
    }
    cout << endl;
}
