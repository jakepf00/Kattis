#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    int highGuess = 1001, lowGuess = 1, i = 0;
    bool correct = false;

    while ((correct == false) && (i < 10)) {
        cout << (highGuess + lowGuess) / 2 << endl;
        cin >> input;
        if (input == "lower") {
            highGuess = (highGuess + lowGuess) / 2;
        }
        else if (input == "higher") {
            lowGuess = (highGuess + lowGuess) / 2;
        }
        else if (input == "correct") {
            correct = true;
        }
        i++;
    }

    return 0;
}
