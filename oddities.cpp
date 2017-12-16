#include <iostream>

using namespace std;

int main() {
    int number = 0;
    int numInputs = 0;

    cin >> numInputs;

    for (int i = 0; i < numInputs; i++) {
        cin >> number;
        if (number % 2 == 0) cout << number << " is even" << endl;
        else cout << number << " is odd" << endl;
    }

    return 0;
}
