#include <iostream>
#include <string>

using namespace std;

int main() {
    string password, message;
    cin >> password, message;

    while (!password.empty()) {
        size_t found = message.find(password[0]);
        if (found != string::npos) {
            password.erase(0,1);
            message.erase(0, found);
        }
        else break;
    }

    if (password.empty()) {
        cout << "PASS" << endl;
    }
    else cout << "FAIL" << endl;

    return 0;
}
