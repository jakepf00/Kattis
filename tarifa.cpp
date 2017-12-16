#include <iostream>

using namespace std;

int main() {
    int monthly, numbers, otherNumber, total;
    total = 0;
    cin >> monthly >> numbers;

    for (int i = 0; i < numbers; i++) {
        cin >> otherNumber;
        total += (monthly - otherNumber);
    }
    total += monthly;

    cout << total << endl;
}
