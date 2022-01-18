#include <iostream>
#include <string>

using namespace std;

int main() {
    int T = 0, C = 0, G = 0, score = 0, temp = 0;
    string word;

    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'T') T++;
        else if (word[i] == 'C') C++;
        else if (word[i] == 'G') G++;
    }
    score += (T * T);
    score += (C * C);
    score += (G * G);

    if (C > G) {
        temp = C;
        C = G;
        G = temp;
    }
    if (T > C) {
        temp = T;
        T = C;
        C = temp;
    }

    score += (7 * T);

    cout << score << endl;
}
