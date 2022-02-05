#include <iostream>
#include <string>

using namespace std;

int main() {
    string password, message;
    cin >> password >> message;

    char next = password[0];
    password.erase(0, 1);
    for (int i = 0; i < message.length(); i++) {
        if (message[i] == next) {
            if (password == "") {
                cout << "PASS" << endl;
                return 0;
            }
            next = password[0];
            password.erase(0, 1);
        }
        else {
            for (auto j : password) {
                if (message[i] == j) {
                    cout << "FAIL" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "FAIL" << endl;
}
