#include <iostream>
#include <string>

using namespace std;

int main() {
    string first;
    string second;

    cin >> first >> second;

    if (first.length() < second.length()) cout << "no" << endl;
    else cout << "go" << endl;

    return 0;
}
