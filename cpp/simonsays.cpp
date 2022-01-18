#include<iostream>
#include<string>

using namespace std;

int main() {
    int lines;
    string command;

    cin >> lines;
    getline(cin, command);

    for (int i = 0; i < lines; i++) {
        getline(cin, command);
        if (command.substr(0, 11) == "Simon says ") {
            command.erase(0, 11);
            cout << command << endl;
        }




    }

    return 0;
}
