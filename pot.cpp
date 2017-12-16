#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int temp = 0;
    int base = 0;
    int power = 0;
    int numProblems = 0;
    int sum = 0;

    cin >> numProblems;

    for (int i = 0; i < numProblems; i++) {
        cin >> temp;
        power = temp % 10;
        base = temp / 10;

        base = pow(base, power);

        sum += base;
    }

    cout << sum << endl;

    return 0;
}
