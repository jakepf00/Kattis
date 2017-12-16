#include <iostream>
using namespace std;

int main() {
    double price, length, width, total = 0;
    int numLawns;
    cout.precision(10);

    cin >> price >> numLawns;

    for (int i = 0; i < numLawns; i++) {
        cin >> width >> length;
        total += (length * width * price);
    }

    cout << total << endl;

    return 0;
}
