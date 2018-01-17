#include <bits/stdc++.h>

using namespace std;

int main() {
    int i = 1;
    string key, mode;

    while (cin >> key >> mode) {
        cout << "Case " << i << ": ";
        i++;
        if (key == "A") {
            cout << "UNIQUE" << endl;
        } else if (key == "A#") {
            cout << "Bb " << mode << endl;
        } else if (key == "Bb") {
            cout << "A# " << mode << endl;
        } else if (key == "B") {
            cout << "UNIQUE" << endl;
        } else if (key == "C") {
            cout << "UNIQUE" << endl;
        } else if (key == "C#") {
            cout << "Db " << mode << endl;
        } else if (key == "Db") {
            cout << "C# " << mode << endl;
        } else if (key == "D") {
            cout << "UNIQUE" << endl;
        } else if (key == "D#") {
            cout << "Eb " << mode << endl;
        } else if (key == "Eb") {
            cout << "D# " << mode << endl;
        } else if (key == "E") {
            cout << "UNIQUE" << endl;
        } else if (key == "F") {
            cout << "UNIQUE" << endl;
        } else if (key == "F#") {
            cout << "Gb " << mode << endl;
        } else if (key == "Gb") {
            cout << "F# " << mode << endl;
        } else if (key == "G") {
            cout << "UNIQUE" << endl;
        } else if (key == "G#") {
            cout << "Ab " << mode << endl;
        } else if (key == "Ab") {
            cout << "G# " << mode << endl;
        }

    }
}
