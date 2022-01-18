#include <iostream>
#include <string>

using namespace std;

int main() {
    char currentChar;
    char prevChar;
    string name;

    cin >> name;
    prevChar = name[0];
    cout << name[0];

    for (int i = 0; i < name.length(); i++) {
        currentChar = name[i];
        if (currentChar != prevChar) cout << currentChar;
        prevChar = currentChar;
    }

    cout << endl;

    return 0;
}
