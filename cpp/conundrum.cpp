#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    int total = 0;

    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (i % 3 == 0) {
            if (word[i] != 'P') total++;
        } else if ((i - 1) % 3 == 0) {
            if (word[i] != 'E') total++;
        } else {
            if (word[i] != 'R') total++;
        }
    }

    cout << total << endl;

    return 0;
}
