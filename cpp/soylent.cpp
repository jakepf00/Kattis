#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int testCases;
    double calories, answer;

    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        cin >> calories;
        answer = calories / 400;
        cout << ceil(answer) << endl;
    }

    return 0;
}
