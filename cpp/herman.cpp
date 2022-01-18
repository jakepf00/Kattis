#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    cin >> radius;
    cout.precision(14);

    double area = radius * radius * 3.141592653589793238462643383279502884;
    cout << area << endl;
    area = radius * radius * 2;
    cout << area << endl;

    return 0;
}
