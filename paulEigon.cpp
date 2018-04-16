#include <bits/stdc++.h>

using namespace std;

int main() {
    int serves, score1, score2;
    cin >> serves >> score1 >> score2;
    int totalScore = score1 + score2;
    if ((totalScore / serves) % 2 == 1) {
        cout << "opponent" << endl;
    } else cout << "paul" << endl;
}
