#include <iostream>
#include <string>

using namespace std;

int main() {
    int numCases, answer;
    string estimate;

    cin >> numCases;

    for (int i = 0; i < numCases; i++) {
        cin >> estimate;

        cout << estimate.length() << endl;
    }

    return 0;
}
