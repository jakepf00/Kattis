#include <iostream>

using namespace std;

struct point {
    int itsX;
    int itsY;
};

int main() {
    point first;
    point second;
    point third;
    point answer;

    cin >> first.itsX >> first.itsY >> second.itsX >> second.itsY >> third.itsX >> third.itsY;

    if (first.itsX == second.itsX) answer.itsX = third.itsX;
    else if (first.itsX == third.itsX) answer.itsX = second.itsX;
    else answer.itsX = first.itsX;

    if (first.itsY == second.itsY) answer.itsY = third.itsY;
    else if (first.itsY == third.itsY) answer.itsY = second.itsY;
    else answer.itsY = first.itsY;

    cout << answer.itsX << " " << answer.itsY << endl;

    return 0;
}
