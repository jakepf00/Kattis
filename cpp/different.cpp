#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long number, number2, answer;

    while (cin >> number >> number2) {
        cout << abs(number - number2) << endl;
    }

    return 0;
}
