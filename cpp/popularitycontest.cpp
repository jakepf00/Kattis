#include<bits/stdc++.h>
using namespace std;

int main() {
    int friends, relationships;
    cin >> friends >> relationships;
    vector<int> scores;
    scores.resize(friends);
    for (int i = 0; i < scores.size(); i++) {
        scores[i] = (i + 1) * -1;
    }

    while (relationships--) {
        int one, two;
        cin >> one >> two;
        scores[one - 1]++;
        scores[two - 1]++;
    }

    for (int i = 0; i < scores.size(); i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
}
