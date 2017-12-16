#include <iostream>
#include <string>

using namespace std;

string convert(string thingy);

int main() {
    string input;
    string answer = "";
    cin >> input;

    while (input.length()%3 != 0) {
        input.insert(input.begin(), '0');
    }

    for (int i = 0; i < input.length(); i+=3) {
        answer.insert(i / 3, convert(input.substr(i, 3)));
    }

    cout << answer << endl;
}

string convert(string thingy) {
    switch (atoi(thingy.c_str())) {
        case 0:
            return "0";
            break;
        case 1:
            return "1";
            break;
        case 10:
            return "2";
            break;
        case 11:
            return "3";
            break;
        case 100:
            return "4";
            break;
        case 101:
            return "5";
            break;
        case 110:
            return "6";
            break;
        case 111:
            return "7";
            break;
    }
}
