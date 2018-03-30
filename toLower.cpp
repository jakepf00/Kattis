#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases, lines, solved = 0;
    cin >> cases >> lines;
    while (cases--) {
        bool canSolve = true;
        string word;
        for (int i = 0; i < lines; i++) {
            cin >> word;
            char thing = word[0];
            thing = tolower(thing, locale());
            word[0] = thing;
            string word2 = word;
            transform(word2.begin(), word2.end(), word2.begin(), ::tolower);
            if (word != word2) {
                canSolve = false;
            }
        }
        if (canSolve) {
            solved++;
        }
    }
    cout << solved << endl;
}
