#include <iostream>
#include <string>

using namespace std;

int main() {
    string answer;
    string input;
    cin >> input;

    for (auto c : input) {
        if (isupper(c)) {
            answer.push_back(c);
        }
    }

    cout << answer << endl;

    return 0;
}
