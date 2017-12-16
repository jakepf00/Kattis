#include <iostream>
#include <string>

using namespace std;

int main() {
    string string1, string2;
    int numCases;

    cin >> numCases;

    for (int i = 0; i < numCases; i++) {
        cin >> string1 >> string2;
        cout << string1 << endl << string2 << endl;
        for (int j = 0; j < string1.length(); j++) {
            if (string1[j] == string2[j]) {
                cout << '.';
            }
            else cout << '*';
        }
        cout << endl << endl;
    }

    return 0;
}
