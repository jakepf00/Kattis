#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string input;
    cin >> input;
    if(next_permutation(input.begin(), input.end())) {
        cout << input << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
