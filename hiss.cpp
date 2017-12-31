#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    cin >> word;

    for (int i = 0; i < word.length() - 1; i++) {
        if ((word[i] == word[i + 1]) && (word[i] == 's')) {
            cout << "hiss" << endl;
            return 0;
        }
    }

    cout << "no hiss" << endl;
}
