#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<string> sentence(n, "");
    vector<pair<long long, long long>> possible(n, make_pair(0, 0));
    vector<string> translation(n, "");
    bool correct = true;

    for (int i = 0; i < n; i++) {
        cin >> sentence[i];
    }

    cin >> m;
    while (m--) {
        string a, b, c;
        cin >> a >> b >> c;
        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == a) {
                translation[i] = b;
                if (c == "correct") {
                    possible[i].first++;
                }
                else {
                    possible[i].second++;
                    correct = false;
                }
            }
        }
    }

    long long numCorrect = 1, numIncorrect = 1;
    for (auto i : possible) {
        numCorrect *= i.first;
        numIncorrect *= (i.first + i.second);
    }
    numIncorrect -= numCorrect;

    if (numCorrect + numIncorrect == 1) {
        for (auto i : translation) cout << i << " ";
        cout << endl << (correct ? "correct" : "incorrect") << endl;
    }
    else {
        cout << numCorrect << " correct" << endl;
        cout << numIncorrect << " incorrect" << endl;
    }
}
